#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll n;
  cin>>n;
  ll arr[n];
  ll sum=0;
  vector<pair<ll,ll>> v;
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	v.push_back({arr[i],i+1});
  	sum += arr[i];
  	
  }
  sort(v.begin(),v.end());
  // greedy approach
  ll c=1;
  
  for(ll i =n-2;i>=0;i--)
  {
  	sum -= v[i+1].first;
  	if(sum < v[i+1].first) // can defeat others on his left in sorted together
       break;
    else
      c++; // all have chances 

  }
   vector<ll> v1;
   for(int i=n-1;i>=n-c;i--)
   {
   	 v1.push_back(v[i].second);
   }
   sort(v1.begin(),v1.end());
   cout<<v1.size()<<endl;
   for(int i=0;i<v1.size();i++)
   {
   	 cout<<v1[i]<<" ";
   }
   cout<<endl;
 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
    cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}
