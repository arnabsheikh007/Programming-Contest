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

void solve()
{
    cin>>n;
    vector<int>segbr;
    vector<int>segln;
    for(int in,i=0;i<n;i++)
    {
        cin>>in;
        v.pb(in);
    }
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1]) cnt++;
        else
        {
            segln.pb(cnt);
            cnt=1;
            segbr.pb(i);
        }
    }
    segln.pb(cnt);
//    for(auto it:segln)
//        cout<<it<<" ";
//    cout<<endl;
//    for(auto it:segbr)
//        cout<<it<<" ";
//    cout<<endl;
    int mxlen=1,len;
    for(int i=0;i<segbr.size();i++)
    {
        if(segln[i]==1 || segln[i+1]==1)
        {
            len=segln[i]+segln[i+1];
            mxlen=max(mxlen,len);
        }
        else if(v[segbr[i]+1]-v[segbr[i]-1]>=2)
        {
            len=segln[i]+segln[i+1];
            mxlen=max(mxlen,len);
        }
        else if(v[segbr[i]]-v[segbr[i]-2]>=2)
        {
            len=segln[i]+segln[i+1];
            mxlen=max(mxlen,len);
        }
        if(segln[i]==n)
            mxlen=max(mxlen,segln[i]);
        else
            mxlen=max(mxlen,segln[i]+1);

    }
    if(segln[segln.size()-1]==n)
        mxlen=max(mxlen,segln[segln.size()-1]);
    else
        mxlen=max(mxlen,segln[segln.size()-1]+1);
    cout<<mxlen<<endl;
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
