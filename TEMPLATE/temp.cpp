#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9

using namespace std;
typedef long double ld;
template <class T> inline T gcd(T x,T y){return (T)(x? gcd(y%x,x):y);}
ld fib(ld n){
    if(n==1) return n;
    return n*fib(n-1);
}
int main()
{
    cout<<fib((ld)1755.0);
    return 0;
}
