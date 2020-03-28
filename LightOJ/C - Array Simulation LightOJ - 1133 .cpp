#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int ar[1000000];
int br[1000000];
int main()
{
    int tc,cs=0;
    cin>>tc;
    while(tc--)
    {
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        while(q--)
        {
            char ch;
            int d,k,y,z;
            cin>>ch;
            if(ch=='S')
            {
                cin>>d;
                for(int i=0;i<n;i++)
                {
                    ar[i]+=d;
                }
            }
            else if(ch=='M')
            {
                cin>>d;
                for(int i=0;i<n;i++)
                {
                    ar[i]*=d;
                }
            }
            else if(ch=='D')
            {
                cin>>k;
                for(int i=0;i<n;i++)
                {
                    ar[i]/=k;
                }
            }
            else if(ch=='R')
            {
                for(int i=0;i<n;i++)
                {
                    br[i]=ar[n-1-i];
                }
                for(int i=0;i<n;i++)
                {
                    ar[i]=br[i];
                }

            }
            else
            {
                cin>>y>>z;
                swap(ar[y],ar[z]);
            }
        }
        cout<<"Case "<<++cs<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)  cout<<ar[i];
            else cout<<ar[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
