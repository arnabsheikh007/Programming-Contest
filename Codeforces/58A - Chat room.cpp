#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(),x,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='h')
        {
            x=i;
            cnt++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='e')
        {
            x=i;
            cnt++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='l')
        {
            x=i;
            cnt++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='l')
        {
            x=i;
            cnt++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='o')
        {
            x=i;
            cnt++;
            break;
        }
    }
    if(cnt==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
