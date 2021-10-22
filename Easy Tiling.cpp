#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dp[n+1];
		dp[1]=0;
		dp[2]=2;
		for(int i=3;i<=n;i++)
		{
			dp[i]=dp[i-1]+dp[i-2];
		}
		cout<<dp[n]<<'\n';
     }
	return 0;
}
