#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,good=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        if(a>=2400 &&b>a)
        {
            good++;
        }
    }
    if(good)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
