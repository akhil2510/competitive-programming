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
    	ll a,b,n,cs=0,ca=0;
    	cin>>n>>a>>b;
    	while(n--)
    	{
    		string str;
    		cin>>str; 
    		if(str[0]=='E'||str[0]=='Q'||str[0]=='U'||str[0]=='I'||str[0]=='N'||str[0]=='O'||str[0]=='X')
    		  cs += a;
    		else
    		  ca += b;
		}
		if(cs>ca) cout<<"SARTHAK"<<endl;
		else if(cs<ca) cout<<"ANURADHA"<<endl;
		else cout<<"DRAW"<<endl;
	}
	return 0;
}
