#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
	ll n,x,k;
	cin>>n>>x>>k;
	if((n+1)%k==0)
	{
	   if(x%k==0)
		 {
		 cout<<"YES"<<endl;
		  return;
	     }
	  cout<<"NO"<<endl;
	   return;
    }
    else
    {
	   if(x%k==0)
		{
		 cout<<"YES"<<endl;
		  return;
	    }
		if((n+1-x)%k==0)
		 {
		 cout<<"YES"<<endl;
		  return;
	     }
	}
	cout<<"NO"<<endl;
	return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
   // t=1;
    while(t--)
    {
       solve();
    }
	return 0;
}
