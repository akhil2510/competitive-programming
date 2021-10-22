#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
	ll n;
	cin>>n;
	map<int,int> arr;
	ll   ans=0,x ;
	for(ll i=0;i<n;i++) 
	{
	   cin>>x;
	   x=x-i;
       ans+= arr[x];
       arr[x]++;
    }
	cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
	return 0;
}
