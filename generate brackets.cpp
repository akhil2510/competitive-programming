#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve(string output,int n,int open,int close,int i)
{
   if(i==(2*n))
     {
      cout<< output <<endl;
      return ;
     }
  else
  {
   if(open<n)
    {
      solve(output+'(',n,open+1,close,i+1);
    }
   if(close<open)
    {
      solve(output+')',n,open,close+1,i+1);
    }
  }
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
        int n;
        cin>>n;
        string output;
        solve(output,n,0,0,0);
       
    }
	return 0;
}