#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char t[1000000];
    int x=n,m=0;
    while(x>=0)
    {
        x-=2;
        t[m]=s[x];
        m++;
    }
    if(n%2)
    {
        x=0;
    }
    else
    {
        x=1;
    }
    m=n/2;
    while(x<n)
    {
        t[m]=s[x];
        x+=2;
        m++;
    }
    cout<<t<<endl;
    return 0;
}
