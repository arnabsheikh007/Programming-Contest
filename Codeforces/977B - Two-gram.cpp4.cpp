#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mx=0,x;
    for(int i=0;i<n-1;i++)
    {
        int cnt=0;
        for(int j=i;j<n-1;j++)
        {
            if(s[j]==s[i] && s[j+1]==s[i+1])
            {
                cnt++;
            }
        }
        if(cnt>mx)
        {
            mx=cnt;
            x=i;
        }
    }
    cout<<s[x]<<s[x+1]<<endl;
    return 0;
}
