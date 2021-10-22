#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  ll a,b;
  cin>>a>>b;
  if(b==1)
    cout<<"NO"<<endl;
  else
   {
   	cout<<"YES"<<endl;
   	 cout<<a<<" "<<a*b <<" "<<a*(b+1)<<endl;
   }
   return ;
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
