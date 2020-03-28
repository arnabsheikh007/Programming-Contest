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
    int n;
    cin>>n;
    int ar[n],cnt=1,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            if(cnt>mx)
            {
                mx=cnt;
            }
        }
        cout<<mx;
    }
    return 0;
}
