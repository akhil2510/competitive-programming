#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
 
 int x,r,y,X,Y;
 cin>>r>>x>>y>>X>>Y;
cout<<ceil(hypot(x-X,y-Y)/(2*r))<<endl;
 
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