#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int a,b,mn;
    cin>>a>>b;
    mn=min(a,b);
    int fact=1;

    for(int i=1;i<=mn;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}
