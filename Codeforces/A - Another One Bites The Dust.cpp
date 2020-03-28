#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<a+b+2*c<<endl;
    }
    else
    {
        cout<<2*c+2*min(a,b)+1<<endl;
    }
    return 0;
}

