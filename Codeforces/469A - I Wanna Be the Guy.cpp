#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,ar[1000000];
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>ar[i];
    }
    int q;
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>ar[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<p+q;j++)
        {
            if(ar[j]==i)
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt==n)
    {
        cout<<"I become the guy."<<endl;

    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;

    }
    return 0;
}
