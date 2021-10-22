#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,p;
    
    cin>>n>>p;
    ll a[n];
	while(n--)
    {
      ll x,r;
      cin>>x>>r;
      a[max(0,x-r)]++;
      a[min(p+1,x+r+1)]--;
    }
    for(ll i=0;i<=p;i++) a[i]+=a[i-1];
    ll ans=0,cnt=0;
    for(ll i=0;i<=p;i++)
    {
    	if(a[i]!=1)cnt++;
    	else
    	  ans=max(ans,cnt),cnt=0;
	}
       cout<<max(ans,cnt);
	return 0;
}
