#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  string s;
  cin>>s;
  int ind=-1;
  int n = s.length();
   for(int i=0;i<n;i++)
  {
    if((s[i])%2 ==0) 
    {
      ind = i;
      if(s[s.size()-1]>s[i])
        break;
    }  
  }
  if(ind==-1)cout<<-1;
  else
     {
         swap(s[ind],s[s.size()-1]);
         cout<<s<<endl;
     }
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