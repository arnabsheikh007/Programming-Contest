#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2 && s[0]>=s[1])
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl<<2<<endl<<s[0]<<" ";
            for(int i=1;i<n;i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

