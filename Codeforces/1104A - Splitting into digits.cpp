#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=9;i>0;i--)
    {
        if(i==n && i!=1)
        {
            continue;
        }
        if(n%i==0)
        {
            x=i;
            break;
        }
    }
    cout<<n/x<<endl;
    for(int i=0;i<n/x;i++)
    {
        cout<<x<<" ";
    }
    return 0;
}
