#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    char t[10000000];
    cin>>s;
    int n=s.size();
    int mid;
    if(n%2)
    {
    	mid=n/2;
    }
    else
    {
    	mid=(n/2)-1;
    }
    int l=mid,r=mid;
    t[0]=s[mid];
    for(int i=1;i<n;i++)
    {
        if(i%2)
        {
            t[i]=s[++r];
        }
        else
        {
            t[i]=s[--l];
        }

    }
    cout<<t<<endl;
    return 0;
}
