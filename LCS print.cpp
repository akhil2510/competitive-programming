
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int m =s.length();
    int n = t.length();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
     for(int j=0;j<=n;j++)
     {
      if(i==0 or j==0)
          dp[i][j]=0;
     }
    }
   for(int i=1;i<=m;i++)
    {
     for(int j=1;j<=n;j++)
     {
       if(s[i-1]==t[j-1])
           dp[i][j]=1+dp[i-1][j-1];
       else
           dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
     }
    }
   string ans;
    int i=m,j=n;
   while(i>m and j>n)
   {
    if(s[i-1]==t[j-1])
    {
        ans += s[i-1];
        i--;
        j--;
    }
    else
    {
        if(dp[i][j-1]>dp[i-1][j])
            j--;
        else
            i--;
    }
   }
   reverse(ans.begin(),ans.end());
    
    cout<< ans <<endl;
    return 0;
}











