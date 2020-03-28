#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[10000000];
    cin>>n;
    int crime=0,police=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>0)
        {
            police+=ar[i];
        }
        else
        {
            if(police)
            {
                police--;
            }
            else
            {
                crime++;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}

