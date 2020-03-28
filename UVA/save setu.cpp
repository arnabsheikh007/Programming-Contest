#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int tc,ac=0;
    cin>>tc;
    while(tc--)
    {
        string s;
        int x;
        cin>>s;
        if(s=="donate")
        {
            cin>>x;
            ac=ac+x;
        }
        if(s=="report")
        {
            cout<<ac<<endl;
        }
    }
    return 0;
}
