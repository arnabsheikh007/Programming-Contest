#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        if(i%2==1)
            cout<<"I hate ";
        else
            cout<<"I love ";
        if(i==num)
            cout<<"it";
        else
            cout<<"that ";
    }
    return 0;
}
