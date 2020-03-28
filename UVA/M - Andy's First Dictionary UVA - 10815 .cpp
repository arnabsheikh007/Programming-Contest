#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int cs=0;
void solve()
{
    string s;
    set<string> st;
    while(getline(cin,s))
    {
        s=s+' ';
        string t="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                t+=s[i];
            }
            else
            {
                for(int i=0;i<t.size();i++) t[i]=tolower(t[i]);
                if(t.size()>0) st.insert(t);
                t.clear();
            }
        }
    }
    for(string x:st)
    {
        cout<<x<<endl;
    }
}
int main()
{
    //freopen("output.txt","w",stdout);
    int tc=1;
    //cin>>tc;
    while(tc--)
    solve();
    return 0;
}
