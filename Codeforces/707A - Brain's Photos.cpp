#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            char x;
            cin>>x;
            if(x=='C' || x=='M' || x=='Y')
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
         cout<<"#Color"<<endl;
    }
    return 0;
}
