#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool isPrime(ll a)
{
	if(a==1) return false;
	for(ll i=2;i*i<=a;i++)
	{
		if(a%i==0)
		 return false;
	}
	return true;
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
       ll a,b;
	   cin>>a>>b;
	   for(ll i=a;i<=b;i++)
	    {
	       if(isPrime(i))cout<<i<<endl;
		}
		cout<<endl;
    }
	return 0;
}
