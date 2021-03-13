#include<bits/stdc++.h>
using namespace std;
int cs=0;
struct Trie{
    bool endmark;
    Trie *next[11];
    Trie()
    {
        endmark=false;
        for(int i=0;i<10;i++)
        {
            next[i]=NULL;
        }
    }
};
bool add(string s,Trie* root)
{
    Trie *cur =root;
    for(int i=0;i<s.size();i++)
    {
        int ch=s[i]-'0';
        if(cur->next[ch]==NULL)
        {
            cur->next[ch]=new Trie();
        }
        if(cur->endmark==true)
        {
            return true;
        }
        cur=cur->next[ch];
    }
    cur->endmark=true;
    return false;
}

bool Search(string s,Trie* root)
{
    Trie *cur = root;
    for(int i=0;i<s.size();i++)
    {
        int ch=s[i]-'a';
        if(cur->next[ch]==NULL)
            return false;
        cur=cur->next[ch];
    }
    return cur->endmark;
}
void del(Trie* cur)
{
    for(int i=0;i<10;i++)
    {
        if (cur->next[i])
            del(cur->next[i]);
    }
    delete(cur);
}
void solve()
{
    Trie *root = new Trie();
    int n;
    cin>>n;
    string s;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    bool ok=true;
    for(int i=0;i<n;i++)
    {
        if(add(v[i],root))
        {
            ok=false;
            break;
        }
    }
    if(ok)  cout<<"Case "<<++cs<<": YES"<<endl;
    else    cout<<"Case "<<++cs<<": NO"<<endl;
    del(root);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}
