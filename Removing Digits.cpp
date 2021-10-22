#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll n;
	cin>>n;
	ll dp[n+1]; 
	 dp[0]=0;
	for(ll i=1;i<=n;i++)
	{
	  ll temp=i ;
	  ll minStep = 1e6+2;
	  while(temp!=0)
	  {
		ll m = temp%10;	
		temp= temp/10;
		if(m==0) 
		  continue;
		minStep = min(minStep,1+dp[i-m]);
	   }
	   dp[i]=minStep;
    }
    cout<<dp[n];
    return 0;
}
