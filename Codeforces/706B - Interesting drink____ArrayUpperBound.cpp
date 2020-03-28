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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,up;
        cin>>x;
        up=upper_bound(ar,ar+n,x)-ar;
        cout<<up<<endl;
    }
    return 0;
}
