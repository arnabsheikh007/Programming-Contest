#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
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
    ll a,b;
    cin>>a>>b;
    for(ll i=a;i<=b;i++)
    {
        vector<int> v;
        ll x=i;
        while(x)
        {
            v.pb(x%10);
            x=x/10;
        }
        bool flag=true;
        for(int j=0;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                if(v[j]==v[k])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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

