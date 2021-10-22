#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	ll l,r;
    	cin>>l>>r;
        ll tot=0;
    	ll a = l+(r*(r+1)/2)-(l*(l+1)/2);
        for(ll i = l; i<=r;i++)
         tot += (a-i)*i;
    	
    	cout<<tot<<endl;
	}
	return 0;
}
