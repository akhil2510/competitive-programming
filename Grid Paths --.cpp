#include<bits/stdc++.h>
 using namespace std;
 #define loop(i,a,n) for(int i=a;i<n;i++)
 #define looprev(i,n,a) for(int i=n;i>=a;i--)
#define mod 1000000007
 int main()
 {
 	int n;
 	cin>>n;
 	bool grid[n+1][n+1];
 	loop(i,1,n+1)
 	{
 	 loop(j,1,n+1)
	  {
	    char c;
		cin>>c;
		if(c == '*')	grid[i][j]=1;
		else
		  grid[i][j]=0;
	  }
    }
    int dp[n+1][n+1];
    for(int i=n;i>=1;i--)
    {
    	for(int j=n;j>=1;j--)
    	{
    	  if(i==n && j==n)
    	  {
    	  	dp[i][j]=1;
		  }
		  else
		  {
		  	int op1 =(i==n)?0:dp[i+1][j] ;
		  	int op2 =(j==n)?0:dp[i][j+1] ;
		  	dp[i][j]= (op1+op2) %mod;
		  	if(grid[i][j])
		  	  dp[i][j]=0;
		  }
		}
	}
    if(grid[n][n])
      cout<<0;
    else
      cout<<dp[1][1];

  return 0;    
 }

