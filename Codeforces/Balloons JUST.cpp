#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,ar[1000000],cnt=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
