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
int n;
vector<int>v;
int dp[105][105][105][3];
int rec(int pos,int odd,int even,int last)
{
    //debug(pos,v[pos]);

    if(pos==n) return 0;

    int& ret=dp[pos][odd][even][last];

    if(ret!=-1) return ret;

    ret=INT_MAX/2;

    if(v[pos]==0)
    {
        //debug("0",pos);
        if(last==1)
        {
            int a=INT_MAX/2,b=INT_MAX/2;
            if(odd) a=rec(pos+1,odd-1,even,1);
            if(even) b=rec(pos+1,odd,even-1,2);

            return ret=min(a,1+b);

        }
        else
        {
            int a=INT_MAX/2,b=INT_MAX/2;
            if(odd) a=rec(pos+1,odd-1,even,1);
            if(even) b=rec(pos+1,odd,even-1,2);
            return ret=min(a+1,b);
        }
    }
    else
    {
        //debug("0 na",pos);
        if(last==1)
        {
            if(v[pos]%2)
                return ret=rec(pos+1,odd,even,1);
            else
                return ret=1 + rec(pos+1,odd,even,2);
        }
        else
        {
             if(v[pos]%2)
                return ret=1 + rec(pos+1,odd,even,1);
             else
                return ret=rec(pos+1,odd,even,2);
        }
    }
}
void solve()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    int odd=0,even=0;
    for(int in,i=0;i<n;i++)
    {
        cin>>in;
        v.pb(in);
        if(in==0) continue;
        if(in%2)    odd++;
        else        even++;
    }
    int reven=(n/2)-even;
    int rodd;
    if(n%2) rodd=(n/2)+1-odd;
    else    rodd=(n/2)-odd;
    int x=rec(0,rodd,reven,1);
    int y=rec(0,rodd,reven,2);
    cout<<min(x,y)<<endl;

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
