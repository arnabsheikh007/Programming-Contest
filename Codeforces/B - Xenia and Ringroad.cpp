#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,m,mov=0,pos=1,ar[1000000];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        if(ar[i]>=pos)
        {
            mov+=ar[i]-pos;
        }
        else
        {
            mov+=n-pos+ar[i];
        }
        pos=ar[i];
    }
    cout<<mov<<endl;
    return 0;
}
