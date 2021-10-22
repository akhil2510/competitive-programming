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
       ll n,r;
       cin>>n>>r;
       ll a[n],b[r];
       for(ll i=0;i<n;i++) cin>>a[i];
       for(ll i=0;i<n;i++) cin>>b[i];
       ll m,c[n];
       c[0]=b[0];
       m =c[0];
       for(ll i=1;i<n;i++)
         {
         c[i]=b[i]+c[i-1]-r;
	     if(c[i]>m)
	      m =c[i];
	   }
	   cout<<m<<endl;
	 }
	return 0;
}
