#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
   {
    ll n,a,b,x,y;
    cin>>n>>x>>y;
     if(x>y)
       {
       	  a=y;
       	  b=x;
	   }
	else
	  a=x,b=y;
    ll arr[n];
    for(ll i=0;i<n;i++)
      cin>>arr[i];
    ll sum,ans=INT_MIN;
    vector<ll> v;
    for(ll i=a;i<=b;i++)
    {
    	for(ll j=0;j<i;i++)
    	  sum += arr[j];
		for(ll k=i;k<n;k++)
		  sum += arr[i]-arr[k-i];
		ans = max(ans,sum/i);
		v.push_back(ans);
	}
    sort(v.begin(),v.end(),greater<ll>());
    cout<<v[0];
   }
	return 0;
}
