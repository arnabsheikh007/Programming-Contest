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
vector<char> adj[25];
bool vis[25][25];
int dis[25][25];
int w,h;
bool check(int x,int y){
    if(x>=0 && y>=0 && x<h && y<w &&adj[x][y]!='#' &&adj[x][y]!='m' &&vis[x][y]==0)
    {
        vis[x][y]=true;
        return true;
    }
    else
        return false;
}
bool BFS(int spx,int spy)
{
    queue< pair<int,int> >q;
    vis[spx][spy]=1;
    dis[spx][spy]=0;
    q.push({spx,spy});
    while(!q.empty())
    {
        auto xx=q.front();
        debug(dis[xx.ff][xx.ss]);
        q.pop();
        if(check(xx.ff+1,xx.ss)) q.push({xx.ff+1,xx.ss}),dis[xx.ff+1][xx.ss]=dis[xx.ff][xx.ss]+1;
        if(check(xx.ff-1,xx.ss)) q.push({xx.ff-1,xx.ss}),dis[xx.ff-1][xx.ss]=dis[xx.ff][xx.ss]+1;
        if(check(xx.ff,xx.ss+1)) q.push({xx.ff,xx.ss+1}),dis[xx.ff][xx.ss+1]=dis[xx.ff][xx.ss]+1;
        if(check(xx.ff,xx.ss-1)) q.push({xx.ff,xx.ss-1}),dis[xx.ff][xx.ss-1]=dis[xx.ff][xx.ss]+1;
    }
}
void solve()
{
    for(int i=0;i<23;i++) adj[i].clear();
    cin>>h>>w;
    int x,y;
    vector< pair<int,int> >v;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='h') x=i,y=j;
            if(ch=='a') v.pb({i,j});
            if(ch=='b') v.pb({i,j});
            if(ch=='c') v.pb({i,j});
            adj[i].pb(ch);
        }
    }
    BFS(x,y);
    int mx=0;
    for(int i=0;i<v.size();i++)
    {
        int bal=dis[v[i].ff][v[i].ss];
        debug(bal);
        mx=max(mx,bal);
    }
    cout<<"Case "<<++cs<<": "<<mx<<endl;
    memset(vis,0,sizeof vis);
    memset(dis,0,sizeof dis);

}
int main()
{
    Fast_Read
    Precision(12)
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
