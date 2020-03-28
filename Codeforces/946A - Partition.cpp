#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[1000000],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=abs(ar[i]);
    }
    cout<<sum<<endl;
    return 0;
}
