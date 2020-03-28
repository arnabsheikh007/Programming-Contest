#include<bits/stdc++.h>

#define     pb      push_back
#define     ff      first
#define     ss      second
#define     eps     1e-9
#define     pi      acos(-1)
#define     Fast_Read           ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)        cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
typedef long long ll;
template <class T> inline T bigmod(T p,T e,T m)
{
    T ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % m;
        p = (p * p) % m;
    }
    return (T)ret;
}
#ifdef ARnAb
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1)
{
    cerr << name << " is " << arg1 << std::endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr(names+1, ',');
    cerr.write(names, comma - names) << " is " << arg1 <<" | ";
    __f(comma+1, args...);
}
#else
#define debug(...)
#endif
///******************************************START*************************************
int cs=0;
vector<ll> primes;
void sieve(ll n){
    vector<bool> check(n+1,false);
    primes.push_back(2);
    for(ll i=3;i*i<=n;i+=2)
        for(ll j=i*i;j<=n;j+=i*2)
            check[j]=true;
    for(ll i=3;i<=n;i+=2)
        if(!check[i]) primes.push_back(i);
}
void solve()
{
    ll a,b,n;
    scanf("%lld %lld",&a,&b);
    ll x=a,ans=1LL;
    ll mod=1000000007;
    for(ll i=0;primes[i]*primes[i]<=x;i++)
    {
        if(x%primes[i]==0)
        {
        ll cnt=0;
            while(x%primes[i]==0)
            {
                x/=primes[i];
                cnt++;
            }
            ll xx=((bigmod(primes[i],cnt*b +1LL,mod)-1LL)+mod)%mod;
            ll y=bigmod(primes[i]-1LL,mod-2LL,mod);
            ans=((ans%mod * xx%mod * y%mod)%mod);
        }
    }
    if(x>1){
        ll xx=((bigmod(x,b+1LL,mod)-1LL)+mod)%mod;
        ll y=bigmod(x-1LL,mod-2LL,mod);
        ans=(ans%mod * xx%mod * y%mod)%mod;
    }
    cout<<"Case "<<++cs<<": "<<ans%mod<<endl;
}
int main()
{
    //Fast_Read
    Precision(2)
#ifdef ARnAb
    double start_time = clock();
    freopen ("output.txt","w",stdout);
    ///freopen ("input.txt","r",stdin);
#endif
    sieve(2000005);
    int tc=1;
    scanf("%d",&tc);
    while(tc--)
        solve();
    return 0;
}
