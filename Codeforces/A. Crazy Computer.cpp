#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    int n,c,ar[100000],cnt=0;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(ar[i+1]-ar[i]<=c)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}
