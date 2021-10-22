#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
   ll n,t;
   cin>>n>>t;
   string str;
   cin>>str;
   while(t--)
  {
     for(int i=0;i<n;i++)
     {
         if(str[i]=='B' and str[i+1]=='G')
           {
               str[i]='G';
               str[i+1] ='B';
               i++;
           }
     }
  }
  cout<<str<<endl;
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