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
    int m,n,k;
    cin>>n>>m>>k;
    vector< pair <int,string> > v;
    if(k>(4*n*m-2*n-2*m))
    {
        cout<<"NO"<<endl;
        return;
    }
    if(m==1)
    {
        if(k<n)
        {
            v.pb({k,"D"});
        }
        else
        {
            v.pb({n-1,"D"});
            v.pb({k-n+1,"U"});
        }
    }
    else
    {
        int curn=1;
        while(k)
        {
            if(curn==1)
            {
                if(k>=m-1 )
                {
                    v.pb({m-1,"R"});
                    k-=m-1;
                }
                else if(k)
                {
                    v.pb({k,"R"});
                    k=0;
                }
                if(k>=m-1 )
                {
                    v.pb({m-1,"L"});
                    k-=m-1;
                }
                else if(k)
                {
                    v.pb({k,"L"});
                    k=0;
                }
                curn++;
            }
            else if(curn<=n)
            {
                if(k>3*(m-1))
                {
                    v.pb({m-1,"DRU"});
                    k-=3*(m-1);
                }
                else
                {
                    if(k/3)
                    {
                        v.pb({k/3,"DRU"});
                        k-=(k/3)*3;
                    }
                    if(k==1)
                    {
                        v.pb({1,"D"});
                        k=0;
                    }
                    if(k==2)
                    {
                        v.pb({1,"DR"});
                        k=0;
                    }
                }
                if(k)
                {
                    v.pb({1,"D"});
                    k--;
                }
                if(k>=m-1)
                {
                    v.pb({m-1,"L"});
                    k-=m-1;
                }
                else if(k)
                {
                    v.pb({k,"L"});
                    k=0;
                }
                curn++;
            }
            else
            {
                v.pb({k,"U"});
                k=0;
            }

        }
    }
    cout<<"YES"<<endl;
    cout<<v.size()<<endl;
    for(auto it:v)
    {
        cout<<it.ff<<" "<<it.ss<<endl;
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
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
