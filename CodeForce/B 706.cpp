#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int n,i,a[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(cin>>n;i<n;i++)
	  cin>>a[i];
    sort(a,a+n);
    int q,m;
    cin>>m;
    while(m--)
	{
	 cin>>q;
	 cout<<upper_bound(a,a+n,q)-a<<endl;
    }
  
	return 0;
}
