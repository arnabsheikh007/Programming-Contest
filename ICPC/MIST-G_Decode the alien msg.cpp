#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    int tc,t,cs=0;
    cin>>tc;
    while(tc--)
    {
        cin>>t;
        int ar[t];
        for(int i=0;i<t;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0)
            {
                ar[i]=1;
            }
            else
            {
                ar[i]=0;
            }
        }
        cout<<"Case "<<++cs<<": ";
        bool flag=0;
        for(int i=0;i<t;i++)
        {
            if(ar[i]==1)
                flag=1;
            if(ar[i]==1)
                cout<<1;
            if(flag==1 && ar[i]==0)
            {
                cout<<0;
            }
        }
        cout<<endl;

    }
    return 0;
}
