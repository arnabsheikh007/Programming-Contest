#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[10000000],a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1) a++;
        if(ar[i]==2) b++;
        if(ar[i]==3) c++;
        if(ar[i]==4) d++;
    }
    int taxi=d+c;
    if(a>c)
    {
        a=a-c;
    }
    else
    {
        a=0;
    }
    if(b%2==0)
    {
        taxi+=b/2;
    }
    else
    {
        taxi+=(b/2)+1;
        if(a>2)
        {
            a=a-2;
        }
        else
        {
            a=0;
        }
    }
    taxi+=a/4;
    a=a%4;
    if(a)
    {
        taxi++;
    }
    cout<<taxi<<endl;
    return 0;
}

