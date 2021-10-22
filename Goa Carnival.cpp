#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main()
{
	ll n , t ;
	cin>>n>>t;
	int arr[n];
	for(ll i=0;i<n;i++)
	{
	  cin>>arr[i];
    }
	sort(arr,arr+n);
	ll m = arr[0];
    ll j=0,count=0;   
	while((t-arr[j])>= m)
	{	
		++count;
		t=t-arr[j];
    	j=(j+(ll)1)%n ;
		if(j==n) 
		  j=(ll)0;
	}
	cout<<count;
	return 0;
}