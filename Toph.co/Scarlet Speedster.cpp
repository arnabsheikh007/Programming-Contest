#include<bits/stdc++.h>

#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
#define     inf     1e18
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
int n,m,a,b;
int dirx[]={1,-1,0,0};
int diry[]={0,0,1,-1};
bool check(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)  return true;
    return false;
}
int dijkstraflash(vector<vector<int> > &adj){
    priority_queue< pair<int,pair<int,int> > > pq;
    vector<vector<ll> > dis( n+10 , vector<ll> (m+10, inf));
    pq.push({0,{0,0}});
    dis[0][0]=0;
    while(!pq.empty())
    {
        auto top=pq.top();
        pq.pop();
        auto u=top.ss;
        for(int i=0;i<4;i++)
        {
            int x=u.ff;
            int y=u.ss;
            int xx=x+dirx[i];
            int yy=y+diry[i];
            if(check(xx,yy))
            {
                int dif=abs(adj[x][y]-adj[xx][yy]);
                if(dif%2)
                {
                    if(dis[x][y]+a<dis[xx][yy])
                    {
                        dis[xx][yy]=dis[x][y]+a;
                        pq.push({-dis[xx][yy],{xx,yy}});
                    }
                }
                else
                {
                    if(dis[x][y]<dis[xx][yy])
                    {
                        dis[xx][yy]=dis[x][y];
                        pq.push({-dis[xx][yy],{xx,yy}});
                    }
                }
            }
        }
    }
    return dis[n-1][m-1];
}
int dijkstraRevflash(vector<vector<int> > &adj){
    priority_queue< pair<int,pair<int,int> > > pq;
    vector<vector<ll> > dis( n+10 , vector<ll> (m+10, inf));
    pq.push({0,{0,0}});
    dis[0][0]=0;
    while(!pq.empty())
    {
        auto top=pq.top();
        pq.pop();
        auto u=top.ss;
        for(int i=0;i<4;i++)
        {
            int x=u.ff;
            int y=u.ss;
            int xx=x+dirx[i];
            int yy=y+diry[i];
            if(check(xx,yy))
            {
                int dif=abs(adj[x][y]-adj[xx][yy]);
                if(dif%2==0)
                {
                    if(dis[x][y]+b<dis[xx][yy])
                    {
                        dis[xx][yy]=dis[x][y]+b;
                        pq.push({-dis[xx][yy],{xx,yy}});
                    }
                }
                else
                {
                    if(dis[x][y]<dis[xx][yy])
                    {
                        dis[xx][yy]=dis[x][y];
                        pq.push({-dis[xx][yy],{xx,yy}});
                    }
                }
            }
        }
    }
    return dis[n-1][m-1];
}
void solve()
{
    cin>>n>>m>>a>>b;
    vector<vector<int> > adj( n , vector<int> (m, 0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
    int flash=dijkstraflash(adj);
    int Revflash=dijkstraRevflash(adj);
    debug(flash,Revflash);
    if(flash<Revflash)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
