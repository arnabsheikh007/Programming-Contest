#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    int n,cnt=1;
    cin>>n;
    if(n<=9)
    {
        cout<<9<<endl;
    }
    else
    {
        n=n+1;
        for(int i=0;;i++)
        {
            if(n%10!=0)
            {
                n++;
                cnt++;
            }
            if(n%10==0)
            {
                n=n/10;

            }
            if(n<10)
            {
                //cnt++;
                break;
            }
        }
        cout<<cnt+9<<endl;
    }
    return 0;
}
