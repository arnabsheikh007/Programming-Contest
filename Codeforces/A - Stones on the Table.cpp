#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    char ar[100];
    cin>>n;
    cin>>ar;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[i+1])
        {
            x=x+1;
        }
    }
    cout<<x<<endl;
    return 0;
}
