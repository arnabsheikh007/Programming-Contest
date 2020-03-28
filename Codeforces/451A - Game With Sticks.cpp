#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'0';
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}

