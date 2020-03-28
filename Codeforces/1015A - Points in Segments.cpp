#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,ar[100000];
    cin>>n>>m;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            ar[i]=1;
        }
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(ar[i]!=1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=m;i++)
    {
        if(ar[i]!=1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

