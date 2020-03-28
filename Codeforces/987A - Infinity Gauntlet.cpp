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
    int p=0,g=0,b=0,o=0,r=0,y=0;
    while(n--)
    {

        string s;
        cin>>s;
        if(s=="purple")
        {
            p=1;
        }
        if(s=="green")
        {
            g=1;
        }
        if(s=="blue")
        {
            b=1;
        }
        if(s=="orange")
        {
            o=1;
        }
        if(s=="red")
        {
            r=1;
        }
        if(s=="yellow")
        {
            y=1;
        }
    }
    int cnt=0;
    if(p==0)
        cnt++;
    if(g==0)
        cnt++;
    if(b==0)
        cnt++;
    if(o==0)
        cnt++;
    if(r==0)
        cnt++;
    if(y==0)
        cnt++;
    cout<<cnt<<endl;
    if(p==0)
        cout<<"Power"<<endl;
    if(g==0)
        cout<<"Time"<<endl;
    if(b==0)
        cout<<"Space"<<endl;
    if(o==0)
        cout<<"Soul"<<endl;
    if(r==0)
        cout<<"Reality"<<endl;
    if(y==0)
        cout<<"Mind"<<endl;

    return 0;
}
