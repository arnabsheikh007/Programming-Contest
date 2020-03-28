#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
using namespace std;
typedef long double ld;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n<10)    cout<<0<<" "<<n<<endl;
        else    cout<<10<<" "<<n-10<<endl;
    }
    return 0;
}
