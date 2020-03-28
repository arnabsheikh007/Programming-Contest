#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int m=s.size();
    int n=t.size();
    for(int i=0;i<m;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            s[i]='1';
        }
        else
        {
            s[i]='0';
        }
    }
    for(int i=0;i<n;i++)
    {
        if(t[i]=='a'|| t[i]=='e'||t[i]=='i'||t[i]=='o'|| t[i]=='u')
        {
            t[i]='1';
        }
        else
        {
            t[i]='0';
        }
    }
    int cnt=0;
    if(m==n)
    {
        for(int i=0;i<m;i++)
        {
            if(s[i]==t[i])
            {
                cnt=cnt+1;
            }
        }
        if(cnt==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
