#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;
bool LeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main()
{
    int tc,cs=0;
    cin>>tc;
    while(tc--)
    {
        int a,b,y1,y2;
        cin>>a>>b>>y1>>y2;
        if(a==29 && b==2)
        {
            int cnt=0;
            for(int i=y1+1;i<=y2;i++)
            {
                if(LeapYear(i))
                {
                    cnt++;
                }
            }
            cout<<"Case "<<++cs<<": "<<cnt<<endl;
        }
        else
        {
            cout<<"Case "<<++cs<<": "<<y2-y1<<endl;
        }
    }
    return 0;
}
