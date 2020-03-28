#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int ar[1000000],br[1000000];
bool check(int p,int q,int x)
{
    bool flag=1
    for(int i=0;i<p;i++)
    {
        if(x==ar[i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<q;i++)
        {
            if(x==br[i])
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>ar[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>br[i];
    }

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            int x=ar[i]+br[j];
            if(check(p,q,x))
            {
                cout<<ar[i]<<" "<<br[j]<<endl;
                return 0;
            }
        }
    }
    //return 0;
}
