#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n && n!=0)
    {
        long long ar[n+100];
        for(long long i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(long long i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<ar[i]<<endl;
            }
            else
                cout<<ar[i]<<" ";
        }


    }
    return 0;
}
