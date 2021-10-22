#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   ll cnt=0,k=0;
   for(ll i=0;i<n;i++)
   {
       if(arr[i]<arr[i-1] && i)
       {
         cnt++;
         k = i;
       }
   }
  if(!cnt)cout<<"0"<<endl; 
  else if(cnt==1 && arr[0]>=arr[n-1])  cout<< n-k<<endl;
  else
    cout<<"-1"<<endl;  
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