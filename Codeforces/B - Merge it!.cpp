#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,ar[1000000],x,three=0,one=0,two=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ar[i]=x%3;
            if(ar[i]==0)
            {
                three++;
            }
            else if(ar[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        int sum=three;
        sum+=min(one,two);
        sum+=abs(one-two)/3;
        cout<<sum<<endl;
    }
    return 0;
}
