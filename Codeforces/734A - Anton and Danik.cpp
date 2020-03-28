#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin>>n;
    char ar[1000000];
    cin>>ar;
    for(int i=0;i<n;i++)
    {
        if(ar[i]=='A')
        {
            x=x+1;
        }
        else if(ar[i]=='D')
        {
            y=y+1;
        }
    }
    if(x>y)
    {
        cout<<"Anton"<<endl;
    }
    if(x<y)
    {
        cout<<"Danik"<<endl;
    }
    if(x==y)
        cout<<"Friendship"<<endl;


    return 0;
}
