#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
   ll n,m;
   cin>>n>>m;
   ll arr[n];
   for(ll i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   ll i=0,sum=0;
   while(m--)
   {
     if(arr[i]<0)
      sum += arr[i++];
   }
  cout<< abs(sum)<<endl; 
  return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
  // cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}





