#include<iostream>
using namespace std;
int main()
{
    int a,b,year=0;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b){
        year=i;
        break;
        }
    }
    cout<<year;
    return 0;
}
