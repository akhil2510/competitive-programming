#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int n,m;
vector<set<int>> g;
vector<int>vis;
stack<int>recursionStack;

vector<bool>rsFlag;

bool dfs(int u)
{
	vis[u] = true;
	recursionStack.push(u);
	rsFlag[u]=true;
	for(auto v:g[u])
	{
		if(!vis[v])
		{
		  if(dfs(v))
		    return true;
		}
		if(rsFlag[v])
		{
			recursionStack.push(v);
			return true;
			//No More DFS
		}
	}
	recursionStack.pop();
	rsFlag[u]=false;
	return false;
	// no cycle was deleted
}

void visit_all()
{
	for(int u=1;u<=n;u++)
	{
		if(!vis[u])
	      if(dfs(u))
	         break;
	}	
}
int32_t main()
{
	cin>>n>>m;
	g.resize(n+1);
	vis.resize(n+1);
	rsFlag.resize(n+1);
	for(int i=0;i<m;i++)
   {
   	int u, v;
   	cin>>u>>v;
   	g[u].insert(v);
   }
   visit_all();
   if(recursionStack.empty())
   {
   	 cout<<"IMPOSSIBLE"<<endl;
   	  return 0;
   }
   vector<int>ans;
   int temp = recursionStack.top();
   while(!recursionStack.empty())
   {
   	  ans.push_back(recursionStack.top());
   	  recursionStack.pop();
   	  if(ans.back()==temp and ans.size()!=1)
   	   break;
   }
   reverse(ans.begin(),ans.end());
   cout<<ans.size()<<endl;
   for(auto u:ans)
   {
   	cout<<u<<" ";
   }
}

