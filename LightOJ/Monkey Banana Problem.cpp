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
int n;
vector< vector<int> > v;
int dp [210][105];
ll rec(int x,int y)
{
    if(x>=2*n-1)     return 0;
    if(y<0 ) return 0;

    if(dp[x][y]!=-1)    return dp[x][y];
    ll xx=0,yy=0;
    if(x<n)
    {
        if(y>x) return 0;
        if(x==n-1)
        {
            xx = rec(x+1,y);
            yy = rec(x+1,y-1);
        }
        else
        {
            xx = rec(x+1,y);
            yy = rec(x+1,y+1);
        }

    }
    else
    {
        if(y>(n-(x%n)-2)) return 0;
        xx = rec(x+1,y);
        yy = rec(x+1,y-1);
    }
    ///debug(v[x][y],x,y);
    return dp[x][y] =  v[x][y] + max(xx,yy);
}
void solve()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    v.assign(2*n-1 , vector<int>());
    int x = n;
    for(int in,i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>in;
                v[i].pb(in);
            }
        }
        else
        {
            x--;
            for(int j=0;j<x;j++)
            {
                cin>>in;
                v[i].pb(in);
            }
        }
    }
    cout<<"Case "<<++cs<<": "<<rec(0,0)<<endl;
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
