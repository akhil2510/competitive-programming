#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll i,n,s,t;
  cin>>n>>s>>t;
  ll a[n];
    for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=0;i<=n;i++)
    {
		if(s==t)
        {
         cout<<i;
         return;
        }
		s=a[s];
    }
 cout<<-1<<endl;
 return;
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