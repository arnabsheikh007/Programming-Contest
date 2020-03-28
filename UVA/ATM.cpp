#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    double b;
    int a;
    cin>>a>>b;
    if(a>b-0.50)
    {
        cout<<fixed<<setprecision(2)<<b<<endl;
    }
    else
    {
        if(a%5==0)
        {
            cout<<fixed<<setprecision(2)<<b-a-0.50<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<b<<endl;
        }
    }
    return 0;
}
