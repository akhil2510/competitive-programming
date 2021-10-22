#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

string solve()
{
   ll a[4];
  for(int i=0;i<4;i++)
   cin>>a[i];
  ll p,q;
   p = max(a[0],a[1]);
   q = max(a[2],a[3]);
  sort(a,a+4,greater<ll>());
  if((p==a[0] and q==a[1])||(p==a[1] and q==a[0]))
    return "YES";
  else
   return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
    cin>>t;
   
    while(t--)
    {
      cout<<solve()<<endl;
    }
	return 0;
}