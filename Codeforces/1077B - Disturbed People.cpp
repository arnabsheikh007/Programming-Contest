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
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i-1]==1 && ar[i]==0 && ar[i+1]==1)
        {
            ar[i+1]=0;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
