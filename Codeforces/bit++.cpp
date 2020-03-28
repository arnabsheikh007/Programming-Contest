#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    char ar[100];

    for(int i=0;i<n;i++)
    {
        cin>>ar;
        if(ar[0]=='+'&&ar[1]=='+'&&ar[2]=='X')
            x=x+1;
        if(ar[0]=='X'&&ar[1]=='+'&&ar[2]=='+')
            x=x+1;
        if(ar[0]=='-'&&ar[1]=='-'&&ar[2]=='X')
            x=x-1;
        if(ar[0]=='X'&&ar[1]=='-'&&ar[2]=='-')
            x=x-1;
    }


    cout<<x;
    return 0;
}

