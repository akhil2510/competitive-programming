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
    	ll n,cz,co;
    	string str;
    	cin>>n;
		cin>>str;
    	bool flag=true;
		for(ll i=0;i<n;i++)
    	{
    		ll a=0;
    		ll j=i+1;
    	 	if(str[i]=='1') a++;
    	 	if(a >= j/2 && j%2==0)
    	 	{
    	 	 flag= false;
    	 	 cout<<"YES"<<endl;
    	 	 break;
			}
			if(a > j/2 && j%2!=0)
			{
    	 	 flag= false;
    	 	 cout<<"YES"<<endl;
    	 	 break;
			}
		}
    	if(flag)
		   cout<<"NO"<<endl;
    }
	return 0;
}
