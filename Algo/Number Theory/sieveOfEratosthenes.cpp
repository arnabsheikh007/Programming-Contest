#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;
typedef long double ld;
vector<int> primes;
void sieve(int n){
    vector<bool> check(n+1,false);
    primes.push_back(2);
    for(int i=3;i*i<=n;i+=2)
    {
        for(int j=i*i;j<=n;j+=i*2)
        {
            check[j]=true;
        }
    }
    for(int i=3;i<=n;i+=2)
    {
        if(!check[i]) primes.push_back(i);
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    for(int x:primes) cout<<x<<" ";
    return 0;
}
