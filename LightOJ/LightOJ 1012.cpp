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
int w,h;
bool check(int x,int y){
    if(x>=0 && y>=0 && x<h && y<w &&adj[x][y]=='.'&&vis[x][y]==0)
    {
        vis[x][y]=true;
        return true;
    }
    else
        return false;
}
int BFS(int spx,int spy)
{
    queue< pair<int,int> >q;
    vis[spx][spy]=1;
    q.push({spx,spy});
    int cnt=1;
    while(!q.empty())
    {
        auto xx=q.front();
        q.pop();
        if(check(xx.ff+1,xx.ss)) q.push({xx.ff+1,xx.ss}),cnt++;
        if(check(xx.ff-1,xx.ss)) q.push({xx.ff-1,xx.ss}),cnt++;
        if(check(xx.ff,xx.ss+1)) q.push({xx.ff,xx.ss+1}),cnt++;
        if(check(xx.ff,xx.ss-1)) q.push({xx.ff,xx.ss-1}),cnt++;
    }
    debug(cnt);
    return cnt;
}
void solve()
{
    for(int i=0;i<23;i++) adj[i].clear();
    cin>>w>>h;
    int x,y;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='@') x=i,y=j;
            adj[i].pb(ch);
        }
    }
    cout<<"Case "<<++cs<<": "<<BFS(x,y)<<endl;
    memset(vis,0,sizeof vis);

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
