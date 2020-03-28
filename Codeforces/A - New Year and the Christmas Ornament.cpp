#include<bits/stdc++.h>

using namespace std;
int main()
{
    int y,b,r,mn;
    cin>>y>>b>>r;
    mn=min(y,min(b-1,r-2));
    cout<<mn+mn+1+mn+2<<endl;
    return 0;
}
