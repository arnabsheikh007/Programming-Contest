#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main ()
{
   int n,x;
   cin>>n;
   char ar[101];
   for(int i=0;i<n;i++)
   {
       cin>>ar;
       x=strlen(ar);
       bool flag=1;
       sort(ar,ar+x);
       for(int j=1;j<x;j++)
       {
           if(ar[j]!=ar[j-1]+1)
            flag=0;
       }
       if(flag==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
   return 0;
}
