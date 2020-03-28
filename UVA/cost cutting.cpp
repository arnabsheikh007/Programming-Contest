#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int tc,cs=0;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int tot,mx,mn,ans;
        tot=a+b+c;
        mx=max(a,max(b,c));
        mn=min(a,min(b,c));
        ans=tot-(mx+mn);
        cout<<"Case "<<++cs<<": "<<ans<<endl;
    }
    return 0;
}
