#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
	ll n;
	cin>>n;
	ll ans=0;
	for(ll i =1;i<=n;i=(10*i+1))
	{
		for(int j=1;j<=9;j++)
		{
			if(i*j<=n)
			 ans++;
		}
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
