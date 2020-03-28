#include<bits/stdc++.h>

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
    int x=min(ar[n-1-1]-ar[0],ar[n-1]-ar[1]);
    cout<<x<<endl;
    return 0;
}
