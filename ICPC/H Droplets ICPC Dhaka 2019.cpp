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
int n,m;
///int h=2*n-1,w=2*m-1;
int adj[205][205];
int vis[205][205];
bool check(int x,int y){
    if(x>=0 && y>=0 && x<(2*n-1) && y<(2*m-1) && adj[x][y]!=1 && vis[x][y]==0)
    {
        vis[x][y]=1;
        return true;
    }
    else
    {
        return false;
    }
}
int BFS(int spx,int spy)
{
    queue< pair<int,int> >q;
    int cnt=0;
    vis[spx][spy]=1;
    q.push({spx,spy});
    while(!q.empty())
    {
        auto xx=q.front();
        if(adj[xx.ff][xx.ss]==0)  cnt++;
        q.pop();
        if(check(xx.ff+1,xx.ss)) q.push({xx.ff+1,xx.ss});
        if(check(xx.ff-1,xx.ss)) q.push({xx.ff-1,xx.ss});
        if(check(xx.ff,xx.ss+1)) q.push({xx.ff,xx.ss+1});
        if(check(xx.ff,xx.ss-1)) q.push({xx.ff,xx.ss-1});
    }
    return cnt;
}
void solve()
{
    memset(vis,0,sizeof vis);
    memset(adj,-1,sizeof adj);
    cin>>n>>m;
    vector<char>v[105];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char in;
            cin>>in;
            v[i].pb(in);
        }
    }
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*m-1;j++)
        {
            if(i%2==0 && j%2==0)
            {
                adj[i][j]=1;
            }
            else if(i%2 && j%2)
            {
                adj[i][j]=0;
            }
            else if(i%2==0 && j%2)
            {
                if(v[i/2][j/2]=='R' || v[i/2][j/2]=='B')
                    adj[i][j]=1;
                else
                    adj[i][j]=2;
            }
            else
            {
                if(v[i/2][j/2]=='D' || v[i/2][j/2]=='B')
                    adj[i][j]=1;
                else
                    adj[i][j]=2;
            }
        }
    }
//    for(int i=0;i<2*n-1;i++)
//    {
//        for(int j=0;j<2*m-1;j++)
//        {
//            cout<<adj[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    int ans=0;
    for(int i=0;i<2*m-1;i++)
    {
        if(adj[0][i]==2)
        {
            ans+=BFS(0,i);
        }
    }
    cout<<"Case "<<++cs<<": "<<ans<<endl;
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
