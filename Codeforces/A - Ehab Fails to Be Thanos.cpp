#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[1000000];
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+2*n);
    int half1=0,half2=0;
    for(int i=0;i<n;i++)
    {
        half1+=ar[i];
    }
    for(int i=n;i<2*n;i++)
    {
        half2+=ar[i];
    }
    if(half1==half2)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0;i<2*n;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}
