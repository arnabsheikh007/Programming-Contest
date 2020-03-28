#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int main()
{
    int n,ar[1000],mx=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>mx)
        {
            mx=ar[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        x=x+(mx-ar[i]);
    }
    cout<<x<<endl;
    return 0;
}
