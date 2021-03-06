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
int n;
ll dp[1005][35];
vector<pair<int,int>>v;
ll maxGood(int pos,int k)
{

    if(pos>=n)   return 0;
    if(dp[pos][k]!=-1)
        return  dp[pos][k];
    ll x=maxGood(pos+1,k);
    ll y=0;
    if(k-v[pos].ss>=0)
        y=v[pos].ff + maxGood(pos+1,k-v[pos].ss);
    return dp[pos][k]=max(x,y);
}
void solve()
{
    v.clear();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    int q;
    cin>>q;
    ll ans=0;
    while(q--)
    {
        memset(dp,-1,sizeof(dp));
        int k;
        cin>>k;
        ans+=maxGood(0,k);
    }
    cout<<ans<<endl;
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
