#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char ar[100000];
  cin>>ar;
  int n=strlen(ar);
  for(int i=0;i<n;i=i+2)
  {
      for(int j=i+2;j<n;j=j+2)
      {
          if(ar[j]<ar[i])
          {
                char temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
          }
      }
  }
  cout<<ar<<endl;
  return 0;
}

