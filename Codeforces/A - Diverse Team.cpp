#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,ar[1000000];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j] && ar[i]!=0)
            {
                ar[j]=0;
                x++;
            }
        }
    }
    int pass=0;
    if(n-x>=k)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            {
                cout<<i+1<<" ";
                pass++;
            }
            if(pass==k)
                break;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

