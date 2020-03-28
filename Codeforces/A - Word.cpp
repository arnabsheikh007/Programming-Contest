#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ar[100];
    int n,x=0,y=0;
    cin>>ar;
    n=strlen(ar);
    for(int i=0;i<n;i++)
    {
        if(ar[i]>='a'&&ar[i]<='z')
        {
            x=x+1;
        }
        else
        {
            y=y+1;
        }
    }
    if(y>x)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]>='a'&&ar[i]<='z')
            {
                ar[i]=ar[i]-' ';
            }

        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]>='A'&&ar[i]<='Z')
            {
                ar[i]=ar[i]+' ';
            }

        }
    }
    cout<<ar;
    return 0;
}
