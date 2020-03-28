#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<s<<endl;
    }
    else
    {
        char ar[10000000];
        ar[0]='1';
        for(int i=1;i<(n+1-cnt);i++)
        {
            ar[i]='0';
        }
        cout<<ar<<endl;
    }
    return 0;
}
