#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,m,ar[10000000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        m=m-ar[i];
        cnt++;
        if(m<=0)
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
