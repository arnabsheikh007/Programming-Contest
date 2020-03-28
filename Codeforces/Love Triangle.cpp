#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1],index,x,cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];

    }
    for(int i=1;i<=n;i++)
    {
        index=ar[i];
        x=ar[index];
        if(ar[x]==i)
        {
            cnt=1;
        }
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
