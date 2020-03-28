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
    int n,x;
    cin>>n>>x;
    vector<string>v;
    set<string>st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.pb(s);
        st.insert(s);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string news="";
            for(int k=0;k<x;k++)
            {
                if(v[i][k]=='S'&& v[j][k]=='S') news+="S";
                else if(v[i][k]=='E'&& v[j][k]=='E') news+="E";
                else if(v[i][k]=='T'&& v[j][k]=='T') news+="T";
                else if(v[i][k]=='S'&& v[j][k]=='E') news+="T";
                else if(v[i][k]=='S'&& v[j][k]=='T') news+="E";
                else if(v[i][k]=='E'&& v[j][k]=='S') news+="T";
                else if(v[i][k]=='E'&& v[j][k]=='T') news+="S";
                else if(v[i][k]=='T'&& v[j][k]=='E') news+="S";
                else if(v[i][k]=='T'&& v[j][k]=='S') news+="E";
            }
            if(st.find(news)!=st.end()) cnt++;
        }
    }
    cout<<cnt/3<<endl;


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
