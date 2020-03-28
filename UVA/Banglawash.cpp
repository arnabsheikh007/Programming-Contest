#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    int tc,cs=0;
    string s;
    cin>>tc;
    while(tc--)
    {
        int n,b=0,w=0,a=0,t=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                b++;
            }
            if(s[i]=='W')
            {
                w++;
            }
            if(s[i]=='A')
            {
                a++;
            }
            if(s[i]=='T')
            {
                t++;
            }
        }
        if(b==n-a &&b!=0)
        {
            cout<<"Case "<<++cs<<": "<<"BANGLAWASH"<<endl;
        }
        else if(b>w)
        {
            cout<<"Case "<<++cs<<": "<<"BANGLADESH"<<" "<<b<<" - "<<w<<endl;
        }
        if(w==n-a && w!=0)
        {
            cout<<"Case "<<++cs<<": "<<"WHITEWASH"<<endl;
        }
        else if(w>b)
        {
            cout<<"Case "<<++cs<<": "<<"WWW"<<" "<<w<<" - "<<b<<endl;
        }
        if(a==n)
        {
            cout<<"Case "<<++cs<<": "<<"ABANDONED"<<endl;
        }
        else if(b==w)
        {
            cout<<"Case "<<++cs<<": "<<"DRAW "<<b<<" "<<t<<endl;
        }
    }
    return 0;
}
