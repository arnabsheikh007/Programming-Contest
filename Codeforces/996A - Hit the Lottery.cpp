#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=n/100;
    n=n%100;
    x=x+n/20;
    n=n%20;
    x=x+n/10;
    n=n%10;
    x=x+n/5;
    n=n%5;
    x=x+n/1;
    cout<<x<<endl;
    return 0;
}
