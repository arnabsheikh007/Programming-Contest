#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,cnt=0;
        cin>>n;
        if(n%4==0)
        {
            cnt=n/4;
        }
        else if(n%4==1)
        {
            if(n<9)     cnt=-1;
            else        cnt=(n/4)-1;
        }
        else if(n%4==2)
        {
            if(n==2)    cnt=-1;
            else        cnt=n/4;
        }
        else
        {
            if(n<=11)   cnt=-1;
            else if(n==15)  cnt=2;
            else        cnt=(n/4)-1;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
