#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,ar[1000000];
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2)
            {
                v.pb(i+1);
            }
        }
        int x=v.size();
        if(x>=k && (k-x)%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<n<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
