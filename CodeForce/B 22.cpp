#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,t,i,c,f,m,d;
	cin>>n>>t;
	ll a[n+1];
	a[0]=0;
	m=0;
	f=0;
	for(i=1;i<=n;i++){
		cin>>c;
		a[i]=a[i-1]+c;
		if(a[i]-a[m]>t) m++;
		f=max(f,i-m);
	}
	cout<<f;
}

