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
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v.pb(in);
    }
    sort(v.begin(),v.end());
    ll low=v[0],high=v[n-1]+k;
    ll ans=-1;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        ll x=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<mid)
            {
                x+=mid-v[i];
            }
            else
            {
                break;
            }
        }
        if(x>k)
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;
        }

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
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
