#include<bits/stdc++.h>

#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
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
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll in,i=0;i<n;i++)
    {
        cin>>in;
        if(in<k)    v.pb(in);
    }
    sort(all(v));
    ll ans=0;
    if(v.size()<2)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=0;i<v.size()-1;i++)
    {
        ll high=v.size()-1;
        ll low=i;
        ll mid,x;
        bool ok=false;
        while(high>=low)
        {
            mid=(high+low)/2;
            if(v[i]+v[mid]>=k)
            {
                high=mid-1;
            }
            else
            {
                ok=true;
                x=mid;
                low=mid+1;
            }
        }
        if(ok)
            ans+=(x-i);
        debug(ans);
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
