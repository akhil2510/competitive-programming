#include<bits/stdc++.h>
using namespace std;
long long t,n,a[200010],ans;
int solve()
{
	long long sum=0;
	for (int i=1;i<=n+1;i++) 
	sum+=a[i];
	if (sum==a[n+1]*2)
	 return n+1;
	for (int i=1;i<=n+1;i++) 
		if (sum==a[n+2]+a[i]) return i;
	return 0;
}
int main(){
	cin>>t; 
	while (t--) {
		cin>>n;
		for (int i=1;i<=n+2;i++) cin>>a[i];
		sort(a+1,a+n+3);
		if (ans=solve()) {
			for (int i=1;i<=n+1;i++) if (i!=ans) cout<<a[i]<<" ";
		} else cout<<"-1";
		cout<<"\n";
	}
}
