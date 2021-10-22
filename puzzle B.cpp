#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool isSquare(int n)
{
	int y=sqrt(n) ;
	return n == y*y ;
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
    	ll n;
    	cin>>n;
    	if(n%2==0 && isSquare(n/2))
    	  cout<<"YES"<<endl;
    	else if(n%4==0 && isSquare(n/4))
    	  cout<<"YES"<<endl;
    	else
    	   cout<<"NO"<<endl;
    }
	return 0;
}
