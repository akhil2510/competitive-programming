#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,d,i,a[100],b[100],k=0,x=0;
	cin>>n>>d;
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i];
		k+=a[i];
		x+=b[i];
	}
	if(d<k||d>x){
		cout<<"NO";
	}
  else{
	  cout<<"YES"<<endl;
	  for(i=0;i<n;i++){
		  cout<<min(b[i],d-k+a[i])<<' ';
		  d-=min(b[i],d-k+a[i]);
		  k-=a[i];
	  }
  }
}
