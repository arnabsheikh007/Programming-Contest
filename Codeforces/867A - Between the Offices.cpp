#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   string a;
   cin>>a;


   if(a[0]=='S' && a[n-1]=='F')
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   return 0;
}
