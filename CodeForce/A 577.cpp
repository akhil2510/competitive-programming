#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    ll c=0,k;
    k= n>=x ? 1:2;
    for(ll i=k;i<=n;i++)
    {
    	if(x%i==0 && x/i <=n)
		   c++;
	}
    cout<< c <<endl; 

	return 0;
}
