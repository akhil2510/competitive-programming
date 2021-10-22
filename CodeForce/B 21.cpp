#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007
 
void solve()
{
    int n,m,a[3000];cin>>n>>m;
	for(int i=0;i<m;i++)
	  cin>>a[i];
	sort(a,a+m);
	if(a[0]==1 or a[m-1]==n)
	{
	  cout<<"NO";
	   return ;
	}
	for(int i=1;i<m-1;i++)
	{
		if(a[i+1]-a[i]==1 and a[i]-a[i-1]==1)
		{
		  cout<<"NO"; return ;
	    }
    }
	cout<<"YES";
   return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
   // cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}


