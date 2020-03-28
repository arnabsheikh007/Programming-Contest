#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x;
        cin>>x;
        std::vector<int>::iterator up;
        up=std::upper_bound(v.begin(),v.end(),x);
        std::cout<<up-v.begin()<<endl;
    }
    return 0;
}
