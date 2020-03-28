#include<iostream>
using namespace std;
int main()
{
    int n,k,x=0,ar[101];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]!=0&&ar[i]>=ar[k-1]) x++;
    }
    cout<<x<<endl;
    return 0;
}
