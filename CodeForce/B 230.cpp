#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,a,b,j;
    cin>>n;
    for(int i=0;i<n;i++)
	{
	  cin>>a;
      b= sqrt(a);
      for( j=2;j*j<b;j++)
	    if(a%j==0)break;
	if(j*j>b && b*b==a && a>1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;   
   }
	return 0;
}
