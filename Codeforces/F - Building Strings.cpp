#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     pi      acos(-1)
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        string s,c,p;
        cin>>s>>c>>p;
        map<char,int>mp;
        for(char i='a';i<='z';i++) mp[i]=10;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=min(c[i]-'0',mp[s[i]]);
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            if(mp[p[i]]!=10)
            {
                ans+=mp[p[i]];
            }
            else
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
