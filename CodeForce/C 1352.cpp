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
     int n,k;
     cin>>n>>k;
     int count=0,i=2;
     if(k==n)
	   cout<<k+1<<endl;
     else if(k>n)
	 {
	  i=n;
	  count=n-1;
      while(count<k)
      {
      	 i+=n;
		 count+=n-1;	
	  }
	   cout<<"Ans " << i <<endl;
     }
     else
     {
    	 cout<<"Ans " << k <<endl;
	 }
    
   }
	return 0;
}


