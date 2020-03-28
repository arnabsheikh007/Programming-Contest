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
    int n;
    cin>>n;
    vector<char> v[n+4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            char ch;
            cin>>ch;
            v[i].pb(ch);
        }
    }
    bool flag=0;
    for(int i=0;i<n;i++)
    {

        if(v[i][0]=='O' && v[i][1]=='O')
        {
            v[i][0]='+';
            v[i][1]='+';
            flag=1;
            break;
        }
        else if(v[i][3]=='O' && v[i][4]=='O')
        {
            v[i][3]='+';
            v[i][4]='+';
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
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
