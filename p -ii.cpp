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
       ll n,x;
	   cin>>n>>x;
	   ll a[n] ;
	   set<ll>s;
	   for(ll i=0;i<n;i++) 
	   {
	   cin>>a[i];
	   s.insert(a[i]);
       }
       ll count=0;
		ll m = s.size();
		if ( (n-m) >= x ) cout<<m<<endl;
		else
		   cout<<n-x<<endl;
	 }
	return 0;
}
