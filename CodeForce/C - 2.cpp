#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],s,c,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
		a[i]+=a[i-1];
	}
	if(s%3)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==2*s/3)
			ans+=c;
		if(a[i]==s/3)
			c++;
	}
	cout<<ans;
	return 0;
}
