 #include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long 
int main()
{
    ll n;
    cin>>n;
     ll arr[n];
    for(ll i=0;i<n;i++)
     cin>>arr[i];
    sort(arr,arr+n);
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
          count++;
    }
    cout<<count;
	return 0;
}
