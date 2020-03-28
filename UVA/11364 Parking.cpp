#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,ar[1000000];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<2*(ar[n-1]-ar[0])<<endl;
    }
    return 0;
}
