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
   for(ll i=0;i<n;i++) cin>>arr[i];
   if(n==1)
   {
   	  cout<<"0"<<endl;
   	  return;
   }
   if(n%2==0)
     cout<<n/2<<endl;
   else
     cout<<n/2 +1 <<endl;
   for(ll i=0;i<n;i+=2) 
    {
    	if(i==n-1)
    	 cout<<i-1+1<<" "<<i+1<<" "<<min(arr[i],arr[i-1])<<" "<<1000000007<<endl;
	    else
	    {
		  cout<<i+1<<" "<<i+1+1<<" "<<min(arr[i],arr[i-1])<<" "<<1000000007<<endl;
		  arr[i-1]=min(arr[i],arr[i-1]);
		  arr[i]=1000000007;
	    }   
    }
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
