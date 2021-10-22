#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,d,e=1;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=4000;i++)
    {
     for(int j=0;j<=4000;j++)
	 {
	    d = n-i*a-j*b;
	    if(d>=0 && d%c==0)
	     e= max(e,(i+j+d/c));
	 }	
	}
	cout<<e;
	return 0;
}
