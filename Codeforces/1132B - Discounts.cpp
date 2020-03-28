#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[1000000];
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar,ar+n,greater<int>());
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x;
        cin>>x;
        cout<<sum-ar[x-1]<<endl;
    }
    return 0;
}
