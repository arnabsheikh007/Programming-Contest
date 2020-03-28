#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    a=a+b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
