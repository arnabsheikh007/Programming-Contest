#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int half1=0,half2=0;
        for(int i=0;i<n/2;i++)
        {
            half1+=s[i]-'0';
        }
        for(int i=n/2;i<n;i++)
        {
            half2+=s[i]-'0';
        }
        if(half1==half2)
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

