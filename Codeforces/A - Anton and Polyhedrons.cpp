#include<iostream>
using namespace std;
int main ()
{
   int n,cnt=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       string a;
       cin>>a;
       if(a=="Tetrahedron")
       {
           cnt=cnt+4;
       }
       if(a=="Cube")
       {
           cnt=cnt+6;
       }
       if(a=="Octahedron")
       {
           cnt=cnt+8;
       }
       if(a=="Dodecahedron")
       {
           cnt=cnt+12;
       }
       if(a=="Icosahedron")
       {
           cnt=cnt+20;
       }

   }
   cout<<cnt<<endl;
   return 0;
}
