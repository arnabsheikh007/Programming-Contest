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
        int n,x,y,a,b,c,d;
        int mxa=-100000;
        int mnb=100000;
        int mnc=100000;
        int mxd=-100000;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>a>>b>>c>>d;
            if(!a) mxa=max(mxa,x);
            if(!b) mnb=min(mnb,y);
            if(!c) mnc=min(mnc,x);
            if(!d) mxd=max(mxd,y);
        }
        if((mxa>mnc) || (mxd>mnb))
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<" "<<mnc<<" "<<mnb<<endl;
        }
    }
    return 0;
}
