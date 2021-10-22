#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[5001][5001];
int solve(int i,int j,string &s1,string &s2)
{
   if(s1.length()==i||s2.length()==j)
     return max(s1.length()-i , s2.length()-j);
    
	if(dp[i][j] !=-1)
	 return dp[i][j];
	
	int ans;
	if(s1[i]==s2[j])
	{
		ans = solve(i+1,j+1,s1,s2);
	}
	else
	 {
    	int op1 = 1+ solve(i+1,j,s1,s2);
    	int op2 = 1 + solve(i,j+1,s1,s2);
    	int op3 = 1 + solve(i+1,j+1,s1,s2);
        ans = min(op1,min(op2,op3));
    }
  	return dp[i][j]=ans;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	memset(dp,-1,sizeof dp);
	cout<< solve(0,0,s1,s2);
	return 0;
}
