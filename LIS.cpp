#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

int solve(int arr[],int i,int n,int prev)
{
   if(n==i)
     return 0;
   
   int include=0;
   if(arr[i]>prev)
   {
       include = 1 + solve(arr,i+1,n,arr[i]);
   }
    int exclude = solve(arr,i+1,n,prev);
   return max(include,exclude);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<solve(arr,0,n,INT_MIN);
	return 0;
}