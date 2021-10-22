#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++) cin>>arr[i];
  ll ma = INT_MIN;
  ll pa,pi;
  ll mi = INT_MAX;
  for(ll i=0;i<n;i++)
  {
  	  if(arr[i]>ma)
  	  {
  	  	ma= arr[i];
  	  	pa =i;
	 }
	 if(arr[i]<=mi)
	 {
	 	mi = arr[i];
	 	pi = i;
	 }
  }
  ll ans = pa + n -1 - pi;
   if(pi<pa)cout<< ans-1 <<endl;
   else
     cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    //cin>>t;
    t=1;
    while(t--)
    {
       solve();
    }
	return 0;
}
