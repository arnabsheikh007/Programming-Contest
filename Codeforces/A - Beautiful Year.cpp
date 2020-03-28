#include<bits/stdc++.h>

using namespace std;
int main()
{
    int year;
    cin>>year;
    while(true)
    {
        int a,b,c,d;
        year++;
        a=year%10;
        b=(year/10)%10;
        c=(year/100)%10;
        d=(year/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<year<<endl;
            break;
        }
    }
    return 0;
}
