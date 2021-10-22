#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

ll modulo(ll p,ll N)
{
   return (p % N + N) %N;
}
void solve()
{
  ll x,y,a,n;
  cin>>x>>y>>n;
  ll arr[] = {x-y,x,y,y-x,-x,-y};
  cout<< (arr[n%6]%mod+mod)%mod;
  return;
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