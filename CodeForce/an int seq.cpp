#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll k;
  cin>>k;
  ll m= 2*k +1;
  ll arr[m];
  for(ll i=1;i<=m;i++)
  {
  	arr[i]= k + (i*i);
  }
  ll sum =0;
  for(ll i=1;i<=2*k;i++)
   {
    	sum += __gcd(arr[i],arr[i+1]);
    	cout<<"SUM "<<sum<<endl;
	}
	cout<<sum<<endl;
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
