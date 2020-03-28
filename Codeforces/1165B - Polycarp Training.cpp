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
    int x=1,day=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=x)
        {
            day++;
            x++;
        }
    }
    cout<<day<<endl;
    return 0;
}
