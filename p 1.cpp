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
    ll a,b,c,A,B,C,T;
    cin>>a>>b>>c>>T>>A>>B>>C;

    if(A>=a && B>=b && C>=c && (A+B+C)>=T) 
      cout<<"YES"<<endl;
    else
	  cout<<"NO"<<endl;  
    }
	return 0;
}
