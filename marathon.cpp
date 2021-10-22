#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll  D,d,a,b,c;
  cin>>D>>d>>a>>b>>c;
  ll k = D*d;
  if(42 <=k)
    cout<<c<<endl;
  else if(21<= k and k< 42)
    cout<<b<<endl;
   else if(10 <= k and k<21)
     cout<<a<<endl;
   else if(k<10)
     cout<<0<<endl;  
   return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
   // t=1;
    while(t--)
    {
       solve();
    }
	return 0;
}
