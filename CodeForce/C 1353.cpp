#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       ll ans=0,n;
       cin>>n;
       for(ll i=1;i<=n/2 ;++i)
	      ans += i*i ;
	  cout<< 8*ans<<endl;
	}
	return 0;
}
