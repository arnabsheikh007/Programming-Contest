#include<iostream>
using namespace std;
int main ()
{
    int a,b,v,cnt=0;
    cin>>a>>b;

    if(b%a!=0)
    {
        cout<<-1;
    }

    else
    {
        v=b/a;
        while(v>1)
        {
            if(v%3==0)
            {
                cnt=cnt+1;
                v=v/3;
            }
            else if(v%2==0)
            {
                cnt=cnt+1;
                v=v/2;
            }
            else
            {
                cnt=-1;
                break;

            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
