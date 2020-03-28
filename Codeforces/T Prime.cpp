#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
        long long a,x;
        scanf("%lld",&a);
        x=sqrt(a);
        if(x*x==a &&a!=1)
        {
            bool flag=0;
            for(int i=2;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    flag=1;
                    break;

                }
            }
            if(flag==1)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
   }
}
