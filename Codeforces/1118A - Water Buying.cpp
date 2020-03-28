#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if(b>=2*a)
        {
            cout<<n*a<<endl;
        }
        else
        {
            if(n%2)
            {
                cout<<b*(n/2)+a<<endl;
            }
            else
            {
                cout<<b*(n/2)<<endl;
            }
        }
    }
    return 0;
}
