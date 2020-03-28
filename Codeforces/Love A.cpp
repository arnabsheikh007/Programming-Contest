#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int a=0,other;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
    }
    other=n-a;
    if(a>other)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<2*a-1<<endl;
    }
    return 0;
}
