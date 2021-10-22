#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int p[n],a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    p[0]=0;
    p[1]=a[0];
    for(int i=1;i<n;i++)
    {
    	p[i]=p[i-1]+a[i];
	}
    int q;
    cin>>q;
    while(q--)
    {
    	int i,j;
    	cin>>i>>j;
    	cout<<p[j]-p[i]+a[i]<<endl;
	}
	return 0;
}
