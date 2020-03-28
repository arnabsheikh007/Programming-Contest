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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum=a+b+c+d;
    bool flag=0;
    if(sum-a==a) flag=1;
    else if(sum-b==b) flag=1;
    else if(sum-c==c) flag=1;
    else if(sum-d==d) flag=1;
    else if(sum-a-b==a+b) flag=1;
    else if(sum-a-c==a+c) flag=1;
    else if(sum-a-d==a+d) flag=1;
    else if(sum-b-c==b+c) flag=1;
    else if(sum-d-c==d+c) flag=1;
    else if(sum-b-d==b+d) flag=1;
    else if(sum-a-b-c==a+b+c) flag=1;
    else if(sum-d-b-c==d+b+c) flag=1;
    else if(sum-a-d-c==a+d+c) flag=1;

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

