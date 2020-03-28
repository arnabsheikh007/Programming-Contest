#include<bits/stdc++.h>

#define     pb      push_back
#define     ff      first
#define     ss      second
#define     eps     1e-9
#define     pi      acos(-1)
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
typedef long long ll;
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
int v[1000005];
vector<int> primes;
void sieve(int n){
    vector<bool> check(n+1,false);
    primes.push_back(2);
    for(int i=3;i*i<=n;i+=2)
    {
        for(int j=i*i;j<=n;j+=i*2)
        {
            check[j]=true;
        }
    }
    for(int i=3;i<=n;i+=2)
    {
        if(!check[i]) primes.push_back(i);
    }
}
void factFactorize(int n)
{
    for (int i = 0; i < primes.size() && primes[i] <= n; i++)
    {
        int x = n;
        int freq = 0;
        while (x / primes[i])
        {
            freq += x / primes[i];
            x = x / primes[i];
        }
        printf("%d^%d\n", primes[i], freq);
    }
}
int solve()
{
    int n;
    cin>>n;
    sieve(1000005);
    factFactorize(n);
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
