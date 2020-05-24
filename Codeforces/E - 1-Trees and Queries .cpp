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
int n;
vector<int> adj[100010];
int dis[100010];
int spars_table[20][100010];

void dfs(int sp,int par)
{
    for(int i=0;i<adj[sp].size();i++)
    {
        if(adj[sp][i]==par)      continue;
        spars_table[0][adj[sp][i]]=sp;
        dis[adj[sp][i]]=dis[sp]+1;
        dfs(adj[sp][i],sp);
    }
}

void genSparsTable()
{
    for(int i=1;i<19;i++)
    {
        for(int j=1;j<100010;j++)
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
int getDis(int a,int b)
{
    int lca=LCA(a,b);
    int x=dis[a]+dis[b]-(2*dis[lca]);
    return x;
}
void solve()
{
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    mset(spars_table,-1);
    dis[1]=1;
    dfs(1,1);
    genSparsTable();
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;

        int ax=getDis(a,x);
        int ay=getDis(a,y);
        int ab=getDis(a,b);
        int xb=getDis(x,b);
        int yb=getDis(y,b);
        int axyb=ax+yb+1;
        int ayxb=ay+xb+1;

        if(k%2==0)
        {
            if(ab<=k && ab%2==0) cout<<"YES"<<endl;
            else if(axyb<=k && axyb%2==0) cout<<"YES"<<endl;
            else if(ayxb<=k && ayxb%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(ab<=k && ab%2!=0) cout<<"YES"<<endl;
            else if(axyb<=k && axyb%2!=0) cout<<"YES"<<endl;
            else if(ayxb<=k && ayxb%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
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
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
