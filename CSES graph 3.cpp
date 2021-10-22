#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<bool>vis;
vector<int>lead;
int cc=0;
int m,n;
void dfs(int u)
{
	vis[u]=true;
	for(auto v:graph[u])
	{
		if(!vis[v])
		  dfs(v);
	}
}
void process()
{
   for(int i=1;i<=n;++i)	
	{
	  if(!vis[i])
	  {
		lead.push_back(i);
		cc++;
		dfs(i);
	  }
   }
}
int main()
{
  
  cin>>n>>m;
  graph.resize(n+1);
  vis.resize(n+1);
  
  for(int i=0;i<m;i++)	
	{
		 int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	process();
	
	cout<<cc-1<<endl;
	
	if(cc >1)
	{
	 int u= lead[0], v;
	for(int i=1;i<cc;i++)
	{
	 v=lead[i];
	 cout<<u<<" "<<v<<endl;
     u=v;
	}
	}
	return 0;
}

