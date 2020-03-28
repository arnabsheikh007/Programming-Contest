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
    map<string,string> mp;
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s,t;
        getline(cin,s);
        getline(cin,t);
        //cout<<s<<t;
        mp[s]=t;
    }
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string x;
        getline(cin,x);
        cout<<mp[x]<<endl;
    }
    return 0;
}
