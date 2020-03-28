#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
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
vector< pair<int,int> > adj[10005];
int dis[10005];
int depth[10005];
int spars_table[20][10005];

void dfs(int sp,int par)
{
    for(int i=0;i<adj[sp].size();i++)
    {
        if(adj[sp][i].ff==par)      continue;
        int x=adj[sp][i].ff;
        spars_table[0][x]=sp;
        dis[x]=dis[sp]+adj[sp][i].ss;
        depth[x]=depth[sp]+1;
        dfs(x,sp);
    }
}

void genSparsTable()
{
    for(int i=1;i<19;i++)
    {
        for(int j=1;j<10005;j++)
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
    int dif=depth[b]-depth[a];
    while(dif>0)
    {
        int x=log2(dif);
        b=spars_table[x][b];
        dif-=(1<<x);
    }
    return b;
}
int LCA(int a,int b){
    if(depth[a]>depth[b]) swap(a,b);
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
void solve()
{
    for(int i=0;i<10005;i++)
    {
        adj[i].clear();
    }
    memset(spars_table,-1,sizeof spars_table);
    memset(dis,0,sizeof dis);
    int node;
    cin>>node;
    for(int i=1;i<node;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].pb({b,c});
        adj[b].pb({a,c});

    }
    dfs(1,-1);
    genSparsTable();
//    int q;
//    cin>>q;
//    cout<<"Case "<<++cs<<":"<<endl;
    string s;
    while(true)
    {
        cin>>s;
        if(s=="DONE") break;
        if(s=="DIST")
        {
            int x,y,z;
            cin>>x>>y;
            z=LCA(x,y);
            cout<<(dis[x]+dis[y])-(2*dis[z])<<endl;
        }
        else if(s=="KTH")
        {
            int x,y,z;
            cin>>x>>y>>z;
            if(z==1)
            {
                cout<<x<<endl;
                continue;
            }
            z--;
            int k=LCA(x,y);
            if(z<=(depth[x]-depth[k]))
            {
                while(z>0)
                {
                    int l=log2(z);
                    x=spars_table[l][x];
                    z-=(1<<l);
                }
                cout<<x<<endl;
            }
            else
            {
                int ss=z-(depth[x]-depth[k]);
                z=(depth[y]-depth[k])-ss;
                while(z>0)
                {
                    int l=log2(z);
                    y=spars_table[l][y];
                    z-=(1<<l);
                }
                cout<<y<<endl;
            }
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
