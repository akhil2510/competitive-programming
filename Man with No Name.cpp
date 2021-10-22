#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
	   cin>>n;
	   ll p[n]={0},a[n]={0};
	   for(ll i=0;i<n;i++)
		 cin>>a[i];
		p[0]=a[0];	
       for(ll i=1;i<n;i++)
       {
       	  if(a[i]==-1)
       	    {
			 a[i]= p[i-1]/i  ;
       	    }
			p[i]=p[i-1]+a[i];
	   }
       for(ll i=0;i<n;i++)
         cout<<a[i]<<" ";
      cout<<endl;
	}
	return 0;
}



