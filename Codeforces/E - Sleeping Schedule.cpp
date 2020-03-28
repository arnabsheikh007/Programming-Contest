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
int n,h,l,r;
vector<int>v;
int cs=0;
int dp[2005][2005];
int ghum(int pos,int t)
{
    if(pos>=n)
    {
        return 0;
    }
    if(dp[pos][t]!=-1)
    {
        return dp[pos][t];
    }
    int x=(t+v[pos])%h;
    int y=(t+v[pos]-1)%h;
    int xx=0,yy=0;
    if(x>=l &&x<=r)
    {
        xx=1;
    }
    if(y>=l &&y<=r)
    {
        yy=1;
    }
    int xxx=ghum(pos+1,x)+xx;
    int yyy=ghum(pos+1,y)+yy;
    return dp[pos][t]=max(xxx,yyy);
}
void solve()
{
    cin>>n>>h>>l>>r;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v.pb(in);
    }
    cout<<ghum(0,0)<<endl;
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
