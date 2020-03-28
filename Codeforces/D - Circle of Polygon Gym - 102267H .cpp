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
    ll v,s;
    cin>>v>>s;
    double ans=(s*1.0/(2*sin(pi/v*1.0)))*(s*1.0/(2*sin(pi/v*1.0)))*pi;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}
