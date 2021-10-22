#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int mn = 1e9 ;
   int n,k,j;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++) 
	  {
	   cin>>arr[i];
	   arr[i] += arr[i-1];
      }  
     for(int i=0;i<=n-k;i++)
	 {
	   if(mn > arr[i+k]-arr[i]) 
	     {
	     	j=i+1;
	     	mn = arr[i+k]-arr[i];
		  } 
    }
	cout<<j;
	return 0;
}
