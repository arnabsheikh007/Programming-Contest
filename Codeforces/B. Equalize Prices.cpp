#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,b,ar[1000000];
        cin>>n>>b;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(ar[0]+2*b>=ar[n-1])
        {
            cout<<ar[0]+b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
