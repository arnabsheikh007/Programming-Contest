#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ar[1000];
    cin>>ar;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>='A' && ar[i]<='Z')
        {
            ar[i]=ar[i]+' ';
        }
    }
    sort(ar,ar+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=ar[i+1])
            cnt=cnt+1;
    }
    if(cnt>=26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
