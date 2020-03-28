#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back

using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int m=s.size(),n=t.size(),cnt=0;
    int mn=min(m,n);
    for(int i=0;i<mn;i++)
    {
        if(s[m-1-i]==t[n-1-i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<m-cnt+n-cnt<<endl;
    return 0;
}
