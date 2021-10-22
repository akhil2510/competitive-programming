#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
    vector<int>dp(n,1);
   int len = INT_MIN;
   for(int i=1;i<n;i++)
   {
      for(int j=0;j<i;j++)
       {
       if(arr[j]<arr[i]) 
         dp[i]=max(dp[i],1+dp[j]);
          len = max(len,dp[i]);
       }
   }
   cout<< len ;
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