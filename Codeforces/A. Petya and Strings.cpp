#include<iostream>
using namespace std;
int main ()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]=a[i]+ ' ';
        }
        if(b[i]>='A'&& b[i]<='Z')
        {
            b[i]=b[i]+' ';
        }
    }
    bool flag=0,flagx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            continue;
        if(a[i]>b[i])
        {
            flag=1;
            break;
        }
        else
        {
            flagx=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<1<<endl;
    }
    else if(flagx==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
