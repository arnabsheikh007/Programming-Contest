#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        long long x;
        x=pow(2,n/2);
        cout<<x<<endl;;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
