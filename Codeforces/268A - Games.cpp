#include<bits/stdc++.h>
#define     ll      long long
using namespace std;
int main()
{
    int n,ar[1000000],br[1000000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i]>>br[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]==br[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

