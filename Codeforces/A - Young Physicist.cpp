#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
