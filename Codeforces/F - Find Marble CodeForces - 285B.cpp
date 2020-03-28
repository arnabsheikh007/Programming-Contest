#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int ar[1000000];
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    int cnt=0;
    for(int i=0; i<=100005; i++)
    {
        if(s==t)
        {
            cout<<cnt<<endl;
            return 0;
        }
        else
        {
            s=ar[s];
            cnt++;
        }
    }
    cout<<-1<<endl;
    return 0;
}
