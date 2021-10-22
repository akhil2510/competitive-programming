#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll s,arr[n];
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		for(ll i=0;i<n;i++)
    	{
    		s += arr[i];
		}
		ll q,ans;
		cin>>q;
		ll ar[q];
		for(ll i=1;i<=q;i++)
			cin>>ar[i];
		for(ll i=1;i<=q;i++)
		{	
			ans = s*(ar[i]+1);
			cout<<ans<<endl;
			s= ans;
		}
     }
	return 0;
}
