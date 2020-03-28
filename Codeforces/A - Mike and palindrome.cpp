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
    int n=s.size() ,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            cnt++;
        }
    }
    if(n%2==0)
    {
        if(cnt==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if(cnt==2 || cnt==0)
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
