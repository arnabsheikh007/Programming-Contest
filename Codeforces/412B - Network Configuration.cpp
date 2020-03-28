 #include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
using namespace std;

int main()
{
    int n,k,ar[1000000];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    cout<<ar[k-1]<<endl;
    return 0;
}
