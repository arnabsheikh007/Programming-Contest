#include<bits/stdc++.h>

using namespace std;
int main()
{
    string layout1,layout2,text;
    cin>>layout1>>layout2>>text;
    int n=text.size();
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<26;j++)
        {
            if(text[i]>='a'&& text[i]<='z')
            {
                if(layout1[j]==text[i])
                {
                    cout<<layout2[j];
                }
            }
            else if(text[i]>='A'&& text[i]<='Z')
            {
                char c;
                c=text[i]+' ';
                if(layout1[j]==c)
                {
                    c=layout2[j]-' ';
                    cout<<c;
                }
            }
            else
            {
                cout<<text[i];
                break;
            }
        }
    }
    return 0;
}
