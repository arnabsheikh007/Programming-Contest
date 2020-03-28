#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc,point=0;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        point=max(point,a+b);
    }
    cout<<point<<endl;
    return 0;
}
