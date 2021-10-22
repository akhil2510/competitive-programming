#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int m,a[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;

    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<n-i;j++)
    	{
		 cin>>m;
		 a[i] += m;
	    }
	}
	cout<<a[0]-a[1]<<endl;
	cout<<a[1]-a[2] ;
	return 0;
}
