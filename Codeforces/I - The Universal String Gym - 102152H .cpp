#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     pi      acos(-1)
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        bool flag=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1]+1)
            {
                if(s[i-1]=='z'&&s[i]=='a')  continue;
                flag=0;
                break;
            }
        }
        if(flag)    cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
    return 0;
}
