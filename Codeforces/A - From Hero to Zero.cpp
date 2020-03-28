#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,k,cnt=0;
        cin>>n>>k;
        while(n)
        {
            if(n%k)
            {
                cnt=cnt+n%k;
                n=n-n%k;
            }
            else
            {
                cnt++;
                n=n/k;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}

