#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define maxN 200001
ll arr[maxN];
ll st[4*maxN];

ll build(ll si,ll ss,ll se)
{
   if(ss==se)
    {
      st[si]=arr[ss];
      return arr[ss];
    }
    ll mid = (ss+se)/ 2;
    st[si]=build(2*si,ss,mid)^build(2*si+1,mid+1,se);
    return st[si];
}
ll ans(ll si, ll ss,ll se,ll qs,ll qe)
{
  if(ss>qe||se<qs)
    return 0;
  if(ss<qs && qe<se)
    return st[si];
  ll mid  = (ss+se)/2 ;
  return  ans(2*si,ss,mid,qs,qe)^ans(2*si+1,mid+1,se,qs,qe);
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n,q;
    cin>>n>>q;
    for(ll i=1;i<=n;i++)
       cin>>arr[i];
    build(1,1,n);
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<ans(1,1,n,a,b)<<endl;
    }
	return 0;
}


