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
        cerr.write(names, comma - names) << " is " << arg1 <<" | ";
        __f(comma+1, args...);
    }
#else
    #define debug(...)
#endif
///******************************************START******************************************
int cs=0;
void solve()
{
    int n,po=0,ne=0;
    cin>>n;
    vector< pair<int,int> >pos;
    vector< pair<int,int> >neg;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x<0)
        {
            ne++;
            neg.pb({x,y});
        }
        else
        {
            po++;
            pos.pb({x,y});
        }

    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    int mn=min(ne,po);
    int ans=0;
    for(int i=0;i<mn;i++)
    {
        ans+=neg[neg.size()-1-i].second;
        ans+=pos[i].second;
    }
    if(po!=ne)
    {
        if(mn==po)
        {
            ans+=neg[neg.size()-1-mn].second;
        }
        else
        {
            ans+=pos[mn].second;
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
   // cin>>tc;
    while(tc--)
    solve();
    return 0;
}
