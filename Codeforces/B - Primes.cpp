#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     pi      acos(-1)
#define     eps     1e-9
#define     bug     cout<<"debug"<<endl;
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
    for(int i=0;i<primes.size();i++)
    {
        int x=n-primes[i];
        if(binary_search(primes.begin(),primes.end(),x))
        {
            cout<<primes[i]<<" "<<x<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

