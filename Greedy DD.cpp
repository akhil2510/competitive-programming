#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      ll arr[n];
      for(ll j=0;j<n;j++)
        cin>>arr[j];
      ll i,sum=0,maxSum=INT_MIN;
       for(i=0;i<k;i++) 
	     sum += arr[i];
       maxSum = sum;
      while(i<n)
      {
      	ll p = (i+k-1)%n;
      	sum = sum - arr[i-1] + arr[p] ;
      	maxSum = max(sum,maxSum);
      	i++;
	  }
	  cout<<maxSum<<endl;
	}
	return 0;
}


