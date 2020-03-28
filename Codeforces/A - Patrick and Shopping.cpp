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
    int a,b,c;
    cin>>a>>b>>c;
    int p,q,r,s,mn;
    p=(a+b)*2;
    q=(b+c)*2;
    r=(c+a)*2;
    s=a+b+c;
    mn=min(s,min(p,min(q,r)));
    cout<<mn<<endl;
    return 0;
}
