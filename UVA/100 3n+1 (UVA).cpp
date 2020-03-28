#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;


int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int mx=max(a,b);
        int mn=min(a,b);
        int ans=0;
        for(int i=mn;i<=mx;i++)
        {
            int cnt=1,x=i;
            while(x>1)
            {
                if(x%2)
                {
                    x=3*x+1;
                    cnt++;
                }
                else
                {
                    x=x/2;
                    cnt++;
                }
            }
            if(cnt>ans)
                ans=cnt;
        }
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
    return 0;
}
