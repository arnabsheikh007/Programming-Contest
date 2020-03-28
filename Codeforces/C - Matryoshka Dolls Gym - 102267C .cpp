#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     pi      acos(-1)
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;

int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    while(a)
    {
        a/=b;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
