#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	int n,x;
    	cin>>n>>x;
    	ll arr[n],k,total=0;

    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		total += arr[i];
		}
		if(total==x)
		  cout<<"NO"<<endl;
		else
		  { 
		    cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				if(x==arr[i]) swap(arr[i],arr[i+1]);
				cout<<arr[i]<<' ';
				x -= arr[i];
			}	
			 cout<<endl;		 
        }
        
    }
	return 0;
}
