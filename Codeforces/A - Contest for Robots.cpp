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
    int n,rc=0,c=0,bb=0;
    cin>>n;
    vector<int>a,b;
    for(int in,i=0;i<n;i++)
    {
        cin>>in;
        a.pb(in);
    }
    for(int in,i=0;i<n;i++)
    {
        cin>>in;
        b.pb(in);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1 && b[i]==0)  rc++;
        if(a[i]==1 && b[i]==1)  c++;
        if(b[i]==1) bb++;
    }
    if(rc==0)
    {
        cout<<-1<<endl;
        return;
    }
    int x=bb-c;
    cout<<(x/rc)+1<<endl;

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
