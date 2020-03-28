#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back

using namespace std;
int main()
{
    int n,m,ar[1000000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll sum=0;
    for(int i=0;i<m;i++)
    {
        if(ar[i]<0)
        {
            sum+=ar[i];
        }
    }
    cout<<abs(sum);
    return 0;
}
