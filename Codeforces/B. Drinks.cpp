#include<iostream>
using namespace std;
int main()
{
    int n,ar[101],x=0;
    cin>>n;
    for(int i;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        x=x+ar[i];
    }
    float z;
    z=x*1.0/n;
    cout<<z;
    return 0;
}
