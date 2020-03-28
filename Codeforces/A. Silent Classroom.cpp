#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;

int pr(int m)
{
    m=m-1;
    int x;
    x=(m*(m+1))/2;
    return x;
}
int main()
{
    int n;
    cin>>n;
    char ar[n+10];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ar[i]=s[0];
    }
    int br[30];
    for(int i=0;i<26;i++)
    {
        int cnt=0,r1,r2;
        for(int j=0;j<n;j++)
        {
            if(ar[j]=='a'+ i)
            {
                cnt++;
            }
        }
        if(cnt>2)
        {
            if(cnt%2==0)
            {
                r1=cnt/2;
                r2=cnt/2;
            }
            else
            {
                r1=cnt/2;
                r2=(cnt/2)+1;
            }
            br[i]=pr(r1)+pr(r2);
        }
        else
        {
            br[i]=0;
        }
    }
    int sum=0;
    for(int i=0;i<26;i++)
    {
        sum=sum+br[i];
    }
    cout<<sum<<endl;
    return 0;
}
