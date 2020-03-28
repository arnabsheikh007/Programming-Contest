#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
ll cnt1,cnt2,x,y;
bool check(ll n)
{
    ll c1=n-n/x;
    ll c2=n-n/y;
    if(c1<cnt1 || c2<cnt2)  return false;
    return ((n-n/(x*y))>=(cnt1+cnt2));
}
int main()
{
    cin>>cnt1>>cnt2>>x>>y;
    ll low=1LL,high=100000000000000000LL;
    while(low<=high)
    {
        ll mid=(low+high)/2LL;
        if(check(mid))
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<low<<endl;
}
