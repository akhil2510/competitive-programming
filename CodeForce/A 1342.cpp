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
       ll ans=0,x=0,y=0,a=0,b=0;
       cin>>x>>y;
       cin>>a>>b;
       b = min(b,a+a);
       cout<<abs(x-y)*a + min(x,y)*b <<endl;
	}
	return 0;
}

 

