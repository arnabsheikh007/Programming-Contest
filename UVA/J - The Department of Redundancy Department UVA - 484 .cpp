#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     pi      acos(-1)
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int ar[1000000];
int main()
{
    int n;
    vector<int>v;
    map<int,int>mp;
    while(cin>>n)
    {
        if(!mp[n]) v.pb(n);
        mp[n]++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;
}

