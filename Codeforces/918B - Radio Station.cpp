#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector< pair<string,string> >a;
    for(int i=0;i<n;i++)
    {
        string s,t;
        cin>>s>>t;
        t=t+';';
        a.push_back(make_pair(s,t));
    }
    while(m--)
    {
        string name,ip;
        cin>>name>>ip;
        for(int i=0;i<n;i++)
        {
            if(a[i].second==ip)
            {
                cout<<name<<" "<<ip<<" #"<<a[i].first<<endl;
                break;
            }
        }
    }
    return 0;
}
