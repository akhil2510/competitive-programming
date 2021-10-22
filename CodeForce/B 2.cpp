#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,arr[100000];
    cin>>n>>x;
    for(int i=0;i<x;i++) cin>>arr[i];
    long long ans=0,house=1;
     for(int i=0;i<x;i++)
     {
     	if(arr[i]>=house)
     	{
     		ans += arr[i]-house ;
     		house = arr[i];
		 }
		else
		 {
		 	ans += n-house + arr[i];
		 	house = arr[i];
		 }
	 }
    cout<<ans;
	return 0;
}
