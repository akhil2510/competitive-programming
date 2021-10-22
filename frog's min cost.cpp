#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
   int n;
   cin>>n;
   vector<int>dp(n+1,0);
   int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    dp[0]=0;
    dp[1]=abs(arr[1]-arr[0]);
    for(int i=2;i<n;i++)
    {
        dp[i]= min(dp[i-1]+abs(arr[i]-arr[i-1]), dp[i-2]+abs(arr[i]-arr[i-2]));
    }
    cout<< dp[n-1]<<endl;
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    //cin>>t;
   t=1;
    while(t--)
    {
       solve();
    }
	return 0;
}


