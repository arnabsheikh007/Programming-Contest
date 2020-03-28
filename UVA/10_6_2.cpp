#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
double pi=acos(-1.0);
using namespace std;
int main ()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       int l;
       double red,green;
       cin>>l;
       red=pi*l*l/25.0;
       green=l*(l*0.6)-red;
       cout<<fixed<<setprecision(2)<<red<<" "<<green<<endl;
   }
   return 0;
}
