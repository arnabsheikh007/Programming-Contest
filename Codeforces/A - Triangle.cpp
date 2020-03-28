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
    int ar[1000000];
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+4);
    if(ar[0]+ar[1]>ar[2] || ar[1]+ar[2]>ar[3])
    {
        cout<<"TRIANGLE"<<endl;
    }
    if(ar[0]+ar[1]==ar[2] || ar[1]+ar[2]==ar[3])
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}
