#include<bits/stdc++.h>

#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
#define     mset(a,x)                    memset(a,(x),sizeof(a))
#define     all(x)                       x.begin(),x.end()
#define     allr(x)                      x.rbegin(),x.rend()
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
inline int nxt(){int aaa;scanf("%d",&aaa);return aaa;}
inline ll lxt(){ll aaa;scanf("%lld",&aaa);return aaa;}
inline double dxt(){double aaa;scanf("%lf",&aaa);return aaa;}
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
int node;
vector<int> adj[200005];
int dis[200005];
int spars_table[25][200005];

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
        for(int j=1;j<=node;j++)
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
bool isInSamePath(int x,int y)
{
    int l=LCA(x,y);
    if(l==x || l==y)    return true;
    else    return false;
}
bool isDisOne(int x,int y)
{
    int l=LCA(x,y);
    if(dis[x]-dis[l]==1 || dis[x]-dis[l]==1)   return true;
    else    return false;
}
void query()
{
    int k;
    cin>>k;
    vector<pii>v;
    for(int in,i=0;i<k;i++)
    {
        cin>>in;
        v.pb({dis[in],in});
    }
    sort(all(v));
    for(int i=1;i<v.size();i++)
    {
        int x=v[i-1].ss;
        int y=v[i].ss;
        if(!isInSamePath(x,y) && !isDisOne(x,y))
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
void solve()
{
    int q;
    cin>>node>>q;
    for(int i=0;i<node-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,-1);
    genSparsTable();
    while(q--)
    {
        query();
//        int x,y;
//        cin>>x>>y;
//        cout<<LCA(x,y)<<endl;
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
    //cin>>tc;
    while(tc--)
        solve();
    return 0;
}
