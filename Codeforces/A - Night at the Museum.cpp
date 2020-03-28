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
    string s;
    cin>>s;
    int n=s.size();
    int m,cnt=0,x='a';
    for(int i=0;i<n;i++)
    {
        m=abs(s[i]-x);
        if(m>13)
        {
            m=26-m;
        }
        x=s[i];
        cnt=cnt+m;
    }
    cout<<cnt<<endl;
    return 0;
}
