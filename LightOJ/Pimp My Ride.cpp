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
template < class T> inline T biton(T n,T pos){return n | ((T)1<<pos);}
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
int dp[15][1<<14];
vector<vector<int>> v;
int rec(int pos,int mask)
{
    if(dp[pos][mask]!=-1)  return dp[pos][mask];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(ison(mask,i))
            sum+=v[pos][i];
    }
    if(mask==(1<<n)-1)  return sum;
    int ans =INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(!ison(mask,i))
        {
            ans = min(ans ,rec(i,biton(mask,i)));
        }
    }
    return dp[pos][mask] = ans+sum;
}
void solve()
{

    memset(dp,-1,sizeof dp);
    scanf("%d",&n);
    v.resize(n+10,vector<int>(n+10));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&v[i][j]);
    }
    printf("Case %d: %d\n",++cs,rec(0,0));
}
int main()
{
    ///Fast_Read
    Precision(2)
    #ifdef ARnAb
        double start_time = clock();
        ///freopen ("output.txt","w",stdout);
        ///freopen ("input.txt","r",stdin);
    #endif
    int tc=nxt();
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
