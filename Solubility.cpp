#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll x,a,b;
  cin>>x>>a>>b;
   
  cout<< (a+((100-x)*b))*10 <<endl;
  return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
	return 0;
}
