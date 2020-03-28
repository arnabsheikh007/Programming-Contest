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
    ll mx1;
    ll mx2;
    data(ll _val)
    {
        mx1=_val;
        mx2=0;
    }
    data(){mx1=0,mx2=0;}
};
data tree[4*100005];
void buildTree(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node].mx1=v[s];
        tree[node].mx2=0;
        return;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    buildTree(left,s,mid);
    buildTree(right,mid+1,e);
    tree[node].mx1=max(tree[left].mx1,tree[right].mx1);
    if(tree[node].mx1==tree[left].mx1)
        tree[node].mx2=max(tree[right].mx1,max(tree[left].mx2,tree[right].mx2));
    else
        tree[node].mx2=max(tree[left].mx1,max(tree[left].mx2,tree[right].mx2));
}
void update(ll node,ll s,ll e,ll i,ll v)
{
    if(i<s || i>e)  return;
    if(s==e)
    {
        if(s==i)
        {
            tree[node].mx1=v;
            tree[node].mx2=0;
            return;
        }
        else
            return;
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    update(left,s,mid,i,v);
    update(right,mid+1,e,i,v);
    tree[node].mx1=max(tree[left].mx1,tree[right].mx1);
    if(tree[node].mx1==tree[left].mx1)
        tree[node].mx2=max(tree[right].mx1,max(tree[left].mx2,tree[right].mx2));
    else
        tree[node].mx2=max(tree[left].mx1,max(tree[left].mx2,tree[right].mx2));
}
data query(ll node,ll s,ll e,ll i,ll j)
{
    data ret;
    if(j<s || i>e)
    {
        ret.mx1=0;
        ret.mx2=0;
        return ret;
    }
    if(i<=s && j>=e)
    {
        return tree[node];
    }
    ll mid=(s+e)/2;
    ll left=2*node;
    ll right=left+1;
    data x= query(left,s,mid,i,j);
    data y= query(right,mid+1,e,i,j);
    ret.mx1=max(x.mx1,y.mx1);
    if(ret.mx1==x.mx1)
        ret.mx2=max(y.mx1,max(x.mx2,y.mx2));
    else
        ret.mx2=max(x.mx1,max(x.mx2,y.mx2));
    return ret;

}
void solve()
{
    ll n=input();
    v.pb(0);
    for(ll i=0;i<n;i++)
    {
        ll in=input();
        v.pb(in);
    }
    buildTree(1,1,n);
    ll q=input();
    while(q--)
    {
        char op;
        cin>>op;
        ll a=input(),b=input();
        if(op=='U')
        {
            update(1,1,n,a,b);
        }
        if(op=='Q')
        {
            data x=query(1,1,n,a,b);
            ll y=x.mx1+x.mx2;
            printf("%lld\n",y);
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
    ll tc=1;
    ///cin>>tc;
    while(tc--)
        solve();
    return 0;
}
