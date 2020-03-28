#include<iostream>
using namespace std;
int main()
{
    int x,y,m=0,c=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            m=m+1;
        }
        else if(y>x)
        {
            c=c+1;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(c>m)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
