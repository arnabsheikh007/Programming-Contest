#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    int n,ar[1000000],seat=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        seat+=ar[i];
    }
    if(ar[0]>seat/2)
    {
        cout<<1<<endl<<1<<endl;
    }
    else
    {
        int x=ar[0];
        vector<int>v;
        v.pb(1);
        for(int i=1;i<n;i++)
        {
            if(ar[0]>=2*ar[i])
            {
                x+=ar[i];
                v.pb(i+1);
            }
            if(x>seat/2)
            {
                break;
            }
        }
        if(x>seat/2)
        {
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
