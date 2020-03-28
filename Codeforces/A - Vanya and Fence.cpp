#include<iostream>
using namespace std;
int main()
{
    int n,h,ar[1001],x=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=h)
        {
            x=x+1;
        }
        else
        {
            x=x+2;
        }
    }
    cout<<x<<endl;

    return 0;
}
