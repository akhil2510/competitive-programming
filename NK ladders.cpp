#include<bits/stdc++.h>
using namespace std;

int countWays(int n,int k)
{
  if(n==0) 
   return 1;
  if(n<0) 
   return 0;
 // Recursive Code
  int ans =0;
  for(int jump=1;jump<=k;jump++)
  {
      ans += countWays(n-jump,k);
  }
  return ans ;
}
int countWaysTD(int n,int k,int *dp)
{
  if(n==0) 
   return 1;
  if(n<0) 
   return 0;
  if(dp[n]!=0)
    return dp[n];
  int ans =0;
  for(int jump=1;jump<=k;jump++)
  {
      ans += countWaysTD(n-jump,k,dp);
  }
  return dp[n]=ans ;
}
int countWaysBU(int n,int k)
{
  vector<int>dp(n+1,0);
   dp[0]=1;
  for(int i=1;i<=n;i++)
  {
   for(int jump=1;jump<=k;jump++)
   {
      if(i-jump>0)
        dp[i] += dp[i-jump];
   }
  }
  return dp[n] ;
}
int main()
{
  int n,k;
  cin>>n>>k;
  int dp[1000]={0};
  //cout<<countWaysTD(n,k,dp);
  cout<<countWaysBU(n,k);
  return 0;
}

