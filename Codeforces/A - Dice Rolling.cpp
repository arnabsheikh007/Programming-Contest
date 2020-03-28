#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a;
        cin>>a;
        if(a%7==0)
        {
            cout<<a/7<<endl;
        }
        else
        {
            cout<<(a/7)+1<<endl;
        }
    }o
    return 0;
}

