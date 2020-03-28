#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    //freopen("myfile.txt","w",stdout);
    int n;
    cin>>n;
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second>=x)
        {
            x=v[i].second;
        }
        else
        {
            x=v[i].first;
        }
    }
    cout<<x<<endl;
    return 0;
}
