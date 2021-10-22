#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
    cin>>n;
    vector<pair<ll,ll> > v;
    ll x; ll y;
    while(n--)
	{
    	cin>>x;cin>>y;
    	v.push_back(make_pair(y,x));
    	 
    }
   	sort(v.begin(),v.end());
   	ll ans =0,curr=0;  
   	for(ll i=0;i<v.size();i++)
	{ 
	  if(v[i].second >= curr)
	   {
	   	curr=v[i].first;
	   	ans++;
	   }
   	}
   	cout<<ans<<endl;
}
