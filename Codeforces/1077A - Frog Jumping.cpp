#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b,k,pos;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            pos=(a-b)*k/2;
        }
        else
        {
            pos=a*((k/2)+1)-b*(k/2);
        }
        cout<<pos<<endl;
    }
    return 0;
}

