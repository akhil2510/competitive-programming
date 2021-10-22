#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> tree[200001];

void solve(int src,int par,vector<int>&ans)
{
  int subord=0;
  for(int child:tree[src])
  {
      if(child!=par)
      {
          solve(child,src,ans);
          subord += (1+ans[child]);
      }
  }
    ans[src] = subord;
    return ;
}
int main()
{
   int n,i,x;
    cin>>n;
    vector<int>ans(n+1);
    for(i=2;i<=n;i++)
    {
       cin>>x;
      tree[x].push_back(i);
      tree[i].push_back(x);
    }
    solve(1,0,ans);
      for(int i=1;i<=n;i++)
          cout<<ans[i]<<' ';
    return 0;   
}    
    
