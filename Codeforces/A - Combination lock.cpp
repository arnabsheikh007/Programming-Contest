#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n;i++)
    {
        s[i]=s[i]-'0';
        t[i]=t[i]-'0';
        int x,y;
        x=abs(s[i]-t[i]);
        y=min(s[i],t[i])+10-max(s[i],t[i]);
        sum=sum+min(x,y);
    }
    cout<<sum<<endl;
    return 0;
}
