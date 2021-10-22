#include<iostream>
using namespace std;
//Recursive
int solve(int coins[],int m,int v )
{
  if(v==0) return 0;
  int res = INT_MAX ;
  for(int i=0;i<m;i++)
  {
    if(coins[i]<=v)
     {
         int sub_res = solve(coins,m,v-coins[i]);
         if(sub_res !=INT_MAX && sub_res+1 < res)
          res = sub_res+1 ;
     }
  }
  return res ;
}
// top down 
int solveTD(int coins[],int m,int v)
{
    int table[v+1];
    table[0]=0;
   for(int i=1;i<=v;i++)
    table[i]=INT_MAX;
   for(int i=1;i<=v;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(coins[j]<=i)
           {
              int sub_res = table[i-coins[j]];
               if(sub_res !=INT_MAX and sub_res+1 < table[i])
               table[i] = sub_res+1;
           }
       }
   }
   if(table[v]==INT_MAX) return -1;
   return table[v];

}
// Bottom Up


int solveBU(int tot,vector<int> v)
{
   vector<int> dp(tot+1,0);
   for(int i=1;i<=tot;i++)
   {
    dp[i]=INT_MAX:
    for(int c:v)
     {
         if(i-c>0 and dp[i-c]!=INT_MAX)
         {
             dp[i] = min(dp[i],dp[i-c]+1);
         }
     }
   }
   return dp[m]=INT_MAX? -1:dp[m];
}


int main()
{
    vector<int> denom={1,3,5,7};
    int coins[]= {1,3,4,5};
    int m = 8;
    int size = 4;
    cout<<solve(coins,size,tot);
    return 0;
}


