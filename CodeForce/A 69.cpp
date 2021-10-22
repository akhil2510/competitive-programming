#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum1=0,sum2=0,sum3=0,n;
    cin>>n;
    while(n--)
    {
    	int a=0,b=0,c=0;
    	cin>>a>>b>>c;
    	sum1 += a ;
    	sum2 += b;
    	sum3 += c;
	}
	if(sum1==0 && sum2==0&&sum3==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}


