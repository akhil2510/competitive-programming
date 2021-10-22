#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll n;
  cin>>n;
  ll tot=0;
  while(n--)
  {
  	 ll a,b;
  	 cin>>a>>b;
  	 if(tot+a<=500)
  	  {
  	  	tot+= a;
  	  	cout<<'A';
	  }
	 else
	   {
	   	tot -= b;
	   	cout<<'G';
	   }
  }
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
