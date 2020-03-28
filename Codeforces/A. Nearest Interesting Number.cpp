#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back

using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=n,q=n,pcnt=0,qcnt=0;
    while(p)
    {
        int x=p,sum=0;
        sum=x%10+(x/10)%10+(x/100)%10+x/1000;
        if(sum%4==0)
        {
            break;
        }
        p++;
    }
    while(q)
    {
        int x=q,sum=0;
        sum=x%10+(x/10)%10+(x/100)%10+x/1000;
        if(sum%4==0)
        {
            break;
        }
        q++;
    }
    if(p-n<n-q)
    {
        cout<<p<<endl;
    }
    else
    {
        cout<<q<<endl;
    }
    return 0;
}
