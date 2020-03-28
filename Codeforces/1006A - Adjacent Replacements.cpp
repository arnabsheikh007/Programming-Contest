#include<iostream>
using namespace std;
int main()
{
    int n,ar[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            ar[i]=ar[i]-1;
        }
        cout<<ar[i]<<" ";
    }
    return 0;
}
