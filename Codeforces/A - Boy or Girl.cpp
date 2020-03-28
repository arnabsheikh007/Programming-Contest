#include<iostream>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    int n=a.size();
    int cnd=n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnd=cnd-1;
                break;
            }
        }
    }
    if(cnd%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
