#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,ar[n+10],mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ar[i]=a+b+c+d;
    }
    int thomas=ar[0];
    sort(ar,ar+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
        if(ar[i]==thomas)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
