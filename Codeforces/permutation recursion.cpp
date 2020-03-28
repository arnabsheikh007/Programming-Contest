#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
string s;
int len;
int vis[1000];
void permute(string x)
{
    if(x.size()==len)
    {
        cout<<x<<endl;
        return;
    }
    for(int i=0;i<len;i++)
    {
        if(vis[i]==1)       continue;
        string x2=x+s[i];

        vis[i]=1;
        permute(x2);
        vis[i]=0;
    }
}
typedef long double ld;
int main()
{
    cin>>s;
    len=s.size();
    sort(s.begin(),s.end());
    permute("");
    return 0;
}
