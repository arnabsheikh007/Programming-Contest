#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi=acos(-1.0);
const ll N = 1000005;
ll lp[N + 1];
ll phi[N + 1];
vector<ll> pr;

void calc_sieve()
{
    phi[1] = 1;
    for (ll i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            phi[i] = i - 1;
            pr.push_back(i);
        }
        else
        {
            if (lp[i] == lp[i / lp[i]])
                phi[i] = phi[i / lp[i]] * lp[i];
            else
                phi[i] = phi[i / lp[i]] * (lp[i] - 1);
        }
        for (ll j = 0; j < (ll)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}
int main()
{

    return 0LL;
}
