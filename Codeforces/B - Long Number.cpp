#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    int n,ar[10000000];
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    int sz=s.size();
    for(int i=0;i<sz;i++)
    {
        int x=s[i]-'0';
        if(ar[x-1]>x)
        {
            for(int j=i;j<sz;j++)
            {
                int y=s[j]-'0';
                if(ar[y-1]>=y)
                {
                    s[j]=ar[y]+'0';
                }
                else
                    break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
