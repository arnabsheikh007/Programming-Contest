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
///******************************************START****************************************************
int solve()
{
    ll a,b;
    cin>>a>>b;
    ll g=__gcd(a,b);
    vector<int>div;
    for(int i=1;i*i<=g;i++)
    {
        if(g%i==0)
        {
            div.pb(i);
            div.pb(g/i);
        }
    }
    sort(div.rbegin(),div.rend());
    int q;
    cin>>q;
    while(q--)
    {
        ll l,h;
        cin>>l>>h;
        bool flag=true;
        for(int i=0;i<div.size();i++)
        {
            if(div[i]<=h && div[i]>=l)
            {
                cout<<div[i]<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<-1<<endl;
    }
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
