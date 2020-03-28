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
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}
