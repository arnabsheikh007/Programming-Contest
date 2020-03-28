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
void solve()
{
    int n,k;
    cin>>n>>k;
    vector< pair<int,int> >v;
    for(int in,i=0;i<n;i++)
    {
        cin>>in;
        v.pb({in,i});
    }
    sort(v.rbegin(),v.rend());
    ll sum=0;
    vector<int>pos;
    for(int i=0;i<k;i++)
    {
        sum+=v[i].ff;
        pos.pb(v[i].ss);
    }
    sort(pos.begin(),pos.end());
    ll ans=1;
    for(int i=1;i<pos.size();i++)
    {
        ans*=(pos[i]-pos[i-1])%998244353;
        ans%=998244353;
    }
    cout<<sum<<" "<<ans<<endl;
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