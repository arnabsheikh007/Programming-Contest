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
    long long n,row,col;
    cin>>n;
    long long root=sqrt(n);
    if(root*root==n)
    {
        if(root%2)
        {
            row=root;
            col=1;
        }
        else
        {
            row=1;
            col=root;
        }
    }
    else
    {
        long long mid=root*root+(root+1);
        if(n==mid)
        {
            col=row=root+1;
        }
        if(n<mid)
        {
            if(root%2)
            {
                row=root+1;
                col=n-(root*root);
            }
            else
            {
                col=root+1;
                row=n-(root*root);
            }
        }
        else
        {
            if(root%2)
            {
                col=root+1;
                row=((root+1)*(root+1))-n+1;
            }
            else
            {
                row=root+1;
                col=((root+1)*(root+1))-n+1;
            }
        }
    }
    cout<<"Case "<<++cs<<": "<<col<<" "<<row<<endl;
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
    cin>>tc;
    while(tc--)
    solve();
    return 0;
}

