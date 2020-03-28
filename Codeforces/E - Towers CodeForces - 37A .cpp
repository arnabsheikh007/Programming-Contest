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
    int n,mx=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        ar[in]++;
    }
    for(int i=0;i<=1000;i++)
    {
        if(ar[i]) cnt++;
        mx=max(mx,ar[i]);
    }
    cout<<mx<<" "<<cnt<<endl;
    return 0;
}
