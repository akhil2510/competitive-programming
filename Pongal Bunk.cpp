#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n]={0};
    ll q;
    ll p[n]={0};
    cin>>q;
    while(q--)
    {
    	ll l,r;
    	cin>>l>>r; 
		l--;
		r--;   	
          a[l]++;    	   	
          a[r+1]--;
          p[r+1]-=(r-l+1);
	}
	for(ll i=1;i<n;i++)
	  a[i]+=a[i-1];
	 
	p[0]=a[0];
	for(ll i=1;i<n;i++)
	   p[i] += p[i-1]+a[i];
	ll m;
	cin>>m;
	while(m--)
	{
		ll x;
		cin>>x;
		cout<<p[x-1]<<endl;
	}
	return 0;
}
