#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long l,r,sum=0;
        cin>>l>>r;
        if(l%2==0 && r%2==0)
        {
            cout<<(l+r)/2<<endl;
        }
        else if(l%2!=0 && r%2==0)
        {
            cout<<(r-l+1)/2<<endl;
        }
        else if(l%2==0 && r%2!=0)
        {
            cout<<-(r-l+1)/2<<endl;
        }
        else
        {
            cout<<-(l+r)/2<<endl;
        }
    }
    return 0;
}
