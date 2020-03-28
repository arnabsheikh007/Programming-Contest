#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;

int main()
{
    //freopen("myfile.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll g,l;
        cin>>g>>l;
        if(l%g)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<g<<" "<<l<<endl;
        }
    }
    return 0;
}
