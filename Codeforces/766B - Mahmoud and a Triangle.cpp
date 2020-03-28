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
    bool possible=0;
    for(int i=0;i<n-2;i++)
    {
        if(ar[i]+ar[i+1]>ar[i+2])
        {
            possible=1;
            break;
        }
    }
    if(possible)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
