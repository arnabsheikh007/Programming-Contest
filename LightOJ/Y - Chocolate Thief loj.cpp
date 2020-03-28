#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     pi      acos(-1)
#define     ff      first
#define     ss      second
#define     case    cout<<"Case "<<++cs<<": ";
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
    int n;
    cin>>n;
    vector< pair<ll,string> >v;
    for(int i=0;i<n;i++)
    {
        string s;
        int a,b,c;
        cin>>s>>a>>b>>c;
        ll x=a*b*c;
        v.pb({x,s});
    }
    sort(v.begin(),v.end());
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(v[i].ff!=v[i+1].ff)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        case
        cout<<"no thief"<<endl;
    }
    else
    {
        case
        cout<<v[n-1].ss<<" took chocolate from "<<v[0].ss<<endl;
    }
}
int main()
{
    Fast_Read
    Precision(6)
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

