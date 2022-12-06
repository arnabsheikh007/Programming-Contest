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
string s,t;
int ans1;
int dp1[31][31];
ll dp2[62][31][31];
int lcs(int x,int y)
{
    if(x>=s.size() || y>=t.size())  return 0;

    if(dp1[x][y]!=-1) return dp1[x][y];

    if(s[x]==t[y])
    {
        return dp1[x][y] = 1 + lcs(x+1,y+1);
    }
    else
    {
        return dp1[x][y] = max(lcs(x+1,y),lcs(x,y+1));
    }
}

ll rec(int pos ,int x,int y)
{
    if(x>=s.size() && y>=t.size())  return pos==ans1;
    ll& ret = dp2[pos][x][y];
    if(ret!=-1)     return ret;
    ll ans = 0;
    if(x<s.size() && y<t.size())
    {
        if(s[x]==t[y])
        {
            ans += rec(pos+1,x+1,y+1);
        }
        else
        {
            ans += rec(pos+1,x,y+1);
            ans += rec(pos+1,x+1,y);
        }
    }
    else if(x>=s.size())    ans += rec(pos+1,x,y+1);
    else if(y>=t.size())    ans += rec(pos+1,x+1,y);
    return ret = ans ;
}
void solve()
{
    cin>>s>>t;
    memset(dp1,-1,sizeof dp1);
    memset(dp2,-1,sizeof dp2);
    int lc = lcs(0,0);
    ans1 = s.size() + t.size() - lc;
    ll ans2 = rec(0,0,0);
    cout<<"Case "<<++cs<<": "<<ans1<<" "<<ans2<<endl;
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
