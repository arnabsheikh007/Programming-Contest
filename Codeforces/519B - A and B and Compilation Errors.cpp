#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,ar[1000000],br[1000000],cr[1000000],asum=0,bsum=0,csum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        asum+=ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>br[i];
        bsum+=br[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>cr[i];
        csum+=cr[i];
    }
    cout<<asum-bsum<<endl<<bsum-csum<<endl;
    return 0;
}
