#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back

using namespace std;
int main()
{
    int n,ar[1000000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll sum=0;
    for(int i=0;i<n/2;i++)
    {
        sum+=(ar[i]+ar[n-1-i])*(ar[i]+ar[n-1-i]);
    }
    cout<<sum<<endl;
    return 0;
}
