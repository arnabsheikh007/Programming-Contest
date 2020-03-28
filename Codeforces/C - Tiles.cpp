 #include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll x=1;
    for(int i=0;i<a+b;i++)
    {
        x=(2*x)%998244353;
    }
    cout<<x<<endl;
    return 0;
}
