#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int ar[1000000];
int main()
{
   map< pair<int,int> , string > mp;
   int n;
   cin>>n;
   while(n--)
   {
       int x,y;
       string s;
       cin>>x>>y>>s;
       mp[make_pair(x,y)]=s;
   }
   int tc;
   cin>>tc;
   while(tc--)
   {
        int p,q;
        cin>>p>>q;
        cout<<mp[make_pair(p,q)]<<endl;
   }
   return 0;
}
