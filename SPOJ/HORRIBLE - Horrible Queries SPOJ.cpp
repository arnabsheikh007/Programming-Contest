#include<bits/stdc++.h>

#define     ll      long long
#define     pb      push_back
#define     eps     1e-9
#define     ff      first
#define     ss      second
#define     pi      acos(-1)
#define     Fast_Read                    ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define     Precision(x)                 cout.setf(ios::fixed); cout.precision(x);

using namespace std;
typedef long double ld;
ll input()
{
    ll n;
    scanf("%lld",&n);
    return n;
}
#ifdef ARnAb
     #define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template < typename Arg1 >
    void __f(const char* name, Arg1&& arg1){
        cerr << name << " is " << arg1 << std::endl;
    }
    template < typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names+1, ',');
        cerr.write(names, comma - names) << " is " << arg1 <<"  ";
        __f(comma+1, args...);
    }
#else
    #define debug(...)
#endif
///******************************************START******************************************
ll cs=0;
vector<ll>v;
struct data{
    ll val=0;
    ll prop=0;
    data(ll _val)
    {
        val=_val;
        prop=0;
    }
    data(){val=0;}
};
data tree[4*100005];
//void buildTree(ll node,ll s,ll e)
//{
//    if(s==e)
//    {
//        tree[node].data(0);
//        return;
//    }
//    ll mid=(s+e)/2;
//    ll left=2*node+1;
//    ll right=left+1;
//    buildTree(left,s,mid);
//    buildTree(right,mid+1,e);
//    tree[node].val=tree[left].val+tree[right].val;
//}

void propagate(ll node,ll s,ll e,ll i,ll j,ll v)
{
    if(j<s || i>e)  return;
    if(i<=s && j>=e)
    {
        tree[node].val+=((e-s+1)*v);
        tree[node].prop+=v;
        return;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    propagate(left,s,mid,i,j,v);
    propagate(right,mid+1,e,i,j,v);
    tree[node].val=tree[left].val+tree[right].val+((e-s+1)*tree[node].prop);
}

ll query(ll node,ll s,ll e,ll i,ll j,ll carry=0)
{
    if(j<s || i>e)  return 0LL;
    if(i<=s && j>=e)
    {
        return tree[node].val+((e-s+1)*carry);
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    ll x= query(left,s,mid,i,j,carry+tree[node].prop);
    ll y= query(right,mid+1,e,i,j,carry+tree[node].prop);
    return x+y;
}
void solve()
{
    memset(tree,0,sizeof tree);
    ll n=input();
    ll q=input();
    ///printf("Case %lld:\n",++cs);
    while(q--)
    {
        ll op=input();
        if(op==0)
        {
            ll i=input(),j=input(),v=input();
            ///i++,j++;
            propagate(1,1,n,i,j,v);
        }
        if(op==1)
        {
            ll i=input(),j=input();
            ///i++,j++;
            ll ans=query(1,1,n,i,j,0);
            cout<<ans<<endl;
        }
    }
}
int main()
{
    ///Fast_Read
    Precision(2)
    #ifdef ARnAb
        double start_time = clock();
        ///freopen ("output.txt","w",stdout);
        ///freopen ("input.txt","r",stdin);
    #endif
    ll tc=input();
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
