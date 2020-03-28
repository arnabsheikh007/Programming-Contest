#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx,mn,md;
    mx=max(a,max(b,c));
    mn=min(a,min(b,c));
    md=a+b+c-mx-mn;
    int time,p,q,x=0,y=0;
    p=abs(mx-md);
    q=abs(mn-md);
    if(d>p)
    {
        x=d-p;
    }
    if(d>q)
    {
        y=d-q;
    }
    cout<<x+y<<endl;

    return 0;
}

