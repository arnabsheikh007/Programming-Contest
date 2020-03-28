#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;
int gcd ( int a, int b )
{
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int main()
{
    //freopen("myfile.txt","w",stdout);
    int n;
    while(cin>>n && n!=0)
    {
        ll g=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
