#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z,a,b;
    cin>>x>>y>>z;
    a=(x+y)/z;
    if(a>(x/z+y/z))
    {
        long long p=max(x%z,y%z);
        b=z-p;
    }
    else
    {
        b=0;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}

