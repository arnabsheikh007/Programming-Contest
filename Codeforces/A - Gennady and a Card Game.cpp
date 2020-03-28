#include<iostream>
using namespace std;
int main ()
{
   char a,b,flag=0;
   cin>>a>>b;
   for(int i=0;i<5;i++)
   {
       char c,d;
       cin>>c>>d;
       if(a==c || b==d)
       {
           flag=1;
       }
   }
   if(flag==1)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   return 0;
}
