#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(z==0)
    {
        if(x>y)
        {
            cout<<"+"<<endl;
        }
        if(y>x)
        {
            cout<<"-"<<endl;
        }
        if(x==y)
        {
            cout<<0<<endl;
        }
    }
    else
    {
        if(x>y+z)
        {
            cout<<"+"<<endl;
        }
        else if(y>x+z)
        {
            cout<<"-"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }
    }
    return 0;
}
