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
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int cnts=0,cntt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')   cnts++;
            if(t[i]=='1')   cntt++;
        }
        if(cnts==cntt)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
