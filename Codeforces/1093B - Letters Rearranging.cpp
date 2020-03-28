#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int n=s.size(),all=1,palindrome=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[0])
            {
                all=0;
                break;
            }
        }
        if(all)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[n-1-i])
                {
                    palindrome=0;
                    break;
                }
            }
            if(palindrome)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]!=s[i+1])
                    {
                        char temp;
                        temp=s[i];
                        s[i]=s[i+1];
                        s[i+1]=temp;
                        break;
                    }
                }
                cout<<s<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
        }
    }
    return 0;
}
