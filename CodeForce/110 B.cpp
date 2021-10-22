#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

ll solve()
{
   ll n;
   cin>>n;
   ll a[n],ans=0;
   for(ll i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if((__gcd(a[i],2*a[j])>1)||(__gcd(a[j],2*a[i])>1)) 
        ans++;
    }
  }
  return ans;
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
      cout<< solve()<<endl;
    }
	return 0;
}