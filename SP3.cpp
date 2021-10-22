 #include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  int n;
  cin>>n;
  int b=n%11;
  int A=n-b*111;
  if(A>=0 and A%11==0)cout<<"YES";
  else cout<<"NO";
  cout<<endl;
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
