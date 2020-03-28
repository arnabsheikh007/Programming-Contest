#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,ar[1000000];
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        ar[i]=cnt;
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>ar[i+1])
        {
            x++;
        }
    }
    cout<<x<<endl;
    if(x)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]>ar[i+1])
            {
                cout<<ar[i]<<" ";
            }
        }
    }
    return 0;
}
