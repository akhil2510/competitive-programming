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
    vector<int>dp(n+1,0);
    dp[0]=arr[0];
    dp[1]= max(dp[0],dp[1]);
    for(int i=2;i<n;i++)
      dp[i]= max(dp[i-1],arr[i]+dp[i-2]);
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

