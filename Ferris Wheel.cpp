#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long 
#define loop(i,a,b) for(ll i=a;i<b;i++)
int main()
{
	ll n,x;
	cin>>n>>x;
	ll arr[n];
 
	loop(k,0,n) 
	 cin>>arr[k];  
	ll count=0,j=n-1,i=0;
	sort(arr,arr+n);
	while(i<= j)
	{
	   if((arr[i]+arr[j])>x) j--;
	   else{
	   	i++;
	   	j--;
	   }
	   count++;
	}
	cout<< count  ;
	return 0;
}
