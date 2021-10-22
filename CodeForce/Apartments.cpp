#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long 
#define loop(i,a,b) for(ll i=a;i<b;i++)
int main()
{  
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n],b[m];
    loop(i,0,n) cin>>a[i];
    loop(i,0,m) cin>>b[i];
    ll count=0;
    loop(i,0,n)
    {
    	if(i>=k)
		{
	     for(ll j=i-k;j<i+k ;j++)
	     {
	     	if(a[i]==b[j])
	     	  count++;
		 }
	    }
	    else
	    {
	      for(ll j=0;j<i+k ;j++)
	       {
	     	if(a[i]==b[j])
	     	  count++;
		   }
	    	
		}
	}
    cout<<count;
	return 0;
}
