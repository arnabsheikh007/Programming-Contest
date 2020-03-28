#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,time=0,solved=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        time+=i*5;
        if(time>240-k)
        {
            break;
        }
        solved++;
    }
    cout<<solved<<endl;
    return 0;
}

