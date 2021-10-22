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
    	ll ans=0,n;
    	cin>>n;
    	if(n<4)
		{
	    	if(n==1)
	    	 cout<<20<<endl;return 0;
	    	if(n==2)
	    	 cout<<36<<endl;return 0;
	    	if(n==3)
	    	 cout<<51<<endl;return 0;
        }
        else
          {
          	ll p,q;
          	p = n/4 ;
          	q = n%4 ;
          	if(q==0)
          	 ans += (p-1)*11 + 60 ;
			else{
			  ans += (p-1)*11 ;      
          	   if(q==1) ans+=20;
          	   else if(q==2) ans += 36;
          	   else ans += 51;
		  }
      cout<<ans;  	
    }
  }
	return 0;
}


