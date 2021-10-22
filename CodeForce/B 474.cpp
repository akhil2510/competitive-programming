#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],j,x,k=1;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      for(j=x;j<x+k;++j)
	     a[j]=i;
	  k = k+x;
	}
	int p,m;
	cin>>m;
	while(m--)
	{
		cin>>p;
		cout<<a[p]<<endl;
	}
	return 0;
}
