#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,i,ans=0,p=1,x;
	cin>>n>>a>>b;
	for(i=3;i<=n;i++)
	{
		cin>>x;
		if(x!=a+b)
		{
			ans=max(ans,i-p);
			p=i-1;
		}
		a=b;b=x;
	}
	cout<<max(ans,n-p+1);
}