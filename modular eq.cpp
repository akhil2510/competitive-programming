#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007
 
void solve()
{
   ll n,m ;
   set<pair<ll,ll>> s;
   cin>>n>>m;
   for(ll i=2;i<=n;i++)
   {
   	ll a,b;
   	if(m%i==0)
   	 {
   	    b =m/i ;
        a =i ;
        if(a>b)
         {
         	ll temp =a;
         	a=b;
         	b=temp;
		 }
		if( b<=n && b!=m)
		{
		pair<ll,ll> x= make_pair(a,b);
         s.insert(x);
	    }
    }
   }
   ll k = s.size();
   ll ans = (n>m) ? m:n ;
   cout<<  ans-1 + k <<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
   // t=1;
    while(t--)
    {
       solve();
    }
	return 0;
}
