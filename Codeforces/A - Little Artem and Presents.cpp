#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=2*(n/3);
    if(n%3)
    {
        x++;
    }
    cout<<x<<endl;
    return 0;
}
