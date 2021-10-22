#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n];
    	for(ll i=0;i<n;i++) cin>>arr[i];
    	sort(arr,arr+n,greater<ll>());
    	ll res=arr[0] ,temp,ans=arr[0],cnt=1;
    	for(ll i=1;i<n;i++)
    	{
    		temp =ans;
    		 ans = ans+arr[i];
    		 if(ans<=temp)
    		   break;
    		cnt++;
    		res = arr[i];
		}
		cout<<cnt<<" "<<res<<endl;
	}
	return 0;
}
