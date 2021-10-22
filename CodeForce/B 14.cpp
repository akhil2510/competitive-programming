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
  for(ll i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  ll ans=arr[0];
 for(ll i=1;i<n;i++)
  {
    ans += abs(arr[i]-arr[i-1]);
  }
  cout<< ans + n + n-1;
  return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
   // cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}