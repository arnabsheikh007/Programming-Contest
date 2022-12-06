#include<bits/stdc++.h>

#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
#define     inf     INT_MAX/2;
#define     INF     LLONG_MAX/2;
#define     mset(a,x)                    memset(a,(x),sizeof(a))
#define     all(x)                       x.begin(),x.end()
#define     allr(x)                      x.rbegin(),x.rend()
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
template < class T> inline T biton(T n,T pos){return n ((T)1<<pos);}
template < class T> inline T bitoff(T n,T pos){return n & ~((T)1<<pos);}
template < class T> inline T ison(T n,T pos){return (bool)(n & ((T)1<<pos));}
template < class T> inline T gcd(T a, T b){while(b){a%=b;swap(a,b);}return a;}
inline int nxt(){int aaa;scanf("%d",&aaa);return aaa;}
inline ll lxt(){ll aaa;scanf("%lld",&aaa);return aaa;}
inline double dxt(){double aaa;scanf("%lf",&aaa);return aaa;}
template < class T> inline void vinput(T n,vector<T> &v){ for(T in,i=0;i<n;i++){cin>>in; v.push_back(in);} }
template < class T> inline void vout(vector<T> v){ for(auto it:v) cout<<it<<" "; cout<<endl; }
const ll M = 1e9+7;
#ifdef ARnAb
     #define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template < typename Arg1 >
    void __f(const char* name, Arg1&& arg1){
        cerr << name << " is " << arg1 << std::endl;
    }
    template < typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names+1, ',');
        cerr.write(names, comma - names) << " is " << arg1 <<"  ";
        __f(comma+1, args...);
    }
#else
    #define debug(...)
#endif
///******************************************START******************************************
int cs=0;
vector<int> cost;
vector<int> adj[30010];
vector<int>TreeArray;
vector<int> Stime , Etime ;

void dfs1(int node ,int par ,int& time)
{
    TreeArray[++time] = cost[node];
    Stime[node] = time;
    for(auto it:adj[node])
    {
        if(it==par) continue;
        dfs1(it,node,time);
    }
    TreeArray[++time] = -cost[node];
    Etime[node] = time;
}

///L C A///

int dis[30010];
int spars_table[20][30010];

void dfs(int sp,int par)
{
    for(int i=0;i<adj[sp].size();i++)
    {
        if(adj[sp][i]==par)      continue;
        int x=adj[sp][i];
        spars_table[0][x]=sp;
        dis[x]=dis[sp]+1;
        dfs(x,sp);
    }
}

void genSparsTable()
{
    for(int i=1;i<19;i++)
    {
        for(int j=1;j<30010;j++)
        {
            int x=spars_table[i-1][j];
            if(x!=-1)
            {
                spars_table[i][j]=spars_table[i-1][x];
            }
        }
    }
}
int levelUp(int a,int b)
{
    int dif=dis[b]-dis[a];
    while(dif>0)
    {
        int x=log2(dif);
        b=spars_table[x][b];
        dif-=(1<<x);
    }
    return b;
}
int LCA(int a,int b){
    if(dis[a]>dis[b]) swap(a,b);
    b=levelUp(a,b);
    if(a==b) return a;
    for(int i=18;i>=0;i--){
        int x=spars_table[i][a];
        int y=spars_table[i][b];
        if(x==y|| x==-1 || y==-1)
            continue;
        else a=x,b=y;
    }
    return spars_table[0][a];
}
///* * *///
///Segment Tree///
struct data{
    ll val;
    data(ll _val)
    {
        val=_val;
    }
    data(){val=0;}
};
data tree[4*100005];
void buildTree(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node].val=TreeArray[s];
        return;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    buildTree(left,s,mid);
    buildTree(right,mid+1,e);
    tree[node].val=tree[left].val+tree[right].val;
}
void update(ll node,ll s,ll e,ll i,ll v)
{
    if(i<s || i>e)  return;
    if(s==e)
    {
        if(s==i)
        {
            tree[node].val=v;
            return;
        }
        else
            return;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    update(left,s,mid,i,v);
    update(right,mid+1,e,i,v);
    tree[node].val=tree[left].val+tree[right].val;
}
ll query(ll node,ll s,ll e,ll i,ll j)
{
    if(j<s || i>e)
    {
        return 0;
    }
    if(i<=s && j>=e)
    {
        return tree[node].val;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    ll x= query(left,s,mid,i,j);
    ll y= query(right,mid+1,e,i,j);
    return x+y;
}
///***///
void solve()
{
    int n;
    cin>>n;
    //vinput(n,cost);
    cost.assign(n+5,0);
    for(int i=1;i<=n;i++)   cin>>cost[i];
    for(int i=0;i<30010;i++)    adj[i].clear();
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        a++,b++;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    TreeArray.assign(2*n+5,0);
    Stime.assign(n+5,0);
    Etime.assign(n+5,0);
    int time =0;
    dfs1(1,-1,time);
    //print();
    dfs(1,-1);
    genSparsTable();
    buildTree(1,1,2*n);
    int q;
    cin>>q;
    cout<<"Case "<<++cs<<":"<<endl;
    while(q--)
    {
        ll choice,i,j;
        cin>>choice>>i>>j;
        if(choice==0)
        {
            i++;j++;
            ll lca = LCA(i,j);
            ll a = query(1,1,2*n,1,Stime[i]);
            ll b = query(1,1,2*n,1,Stime[j]);
            ll c = query(1,1,2*n,1,Stime[lca]);
            ///debug(a, b, c, cost[lca]);
            ll ans = a + b - 2*c + cost[lca];
            cout<<ans<<endl;
        }
        else
        {
            i++;
            cost[i] = j;
            update(1,1,2*n,Stime[i],j);
            update(1,1,2*n,Etime[i],-j);
        }
    }
}
int main()
{
    Fast_Read
    Precision(2)
    #ifdef ARnAb
        double start_time = clock();
        ///freopen ("output.txt","w",stdout);
        ///freopen ("input.txt","r",stdin);
    #endif
    int tc=1;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}
