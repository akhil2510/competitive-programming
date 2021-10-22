#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    if(n==1 && t> 9)cout<<-1;
    else
    {
    	if(t>9)n--;
    	cout<<t;
    	while(--n)cout<<0;
	}
	return 0;
}
