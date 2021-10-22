#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  string str;
  int m=INT_MIN,n,k;
  int a[26];
  cin>>str;
  cin>>k;
  n  = str.length();
  for(int i=0;i<26;i++)
   {
    cin>>a[i];
    m = max(m,a[i]);
   }
int ans=0;
  for(int i=0;i<n+k;i++)
  {
    if(i<n)
      ans +=(a[str[i]-'a']*(i+1)); 
    else
      ans += m *(i+1);
  }
  cout<<ans<<endl;
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


