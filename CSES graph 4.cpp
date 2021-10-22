#include<bits/stdc++.h>
using namespace std;

int m,n;
vector<vector<int>>g;
vector<bool>vis;
vector<int>par;

void bfs()
{
	vis[1]=true;
	queue<int>q;
	q.push(1);
	while(!q.empty())
	{
	  int u =q.front();
	  q.pop();
	  for(auto v:g[u])
	  {
	    if(!vis[v])
	    {
		 q.push(v);		
	      vis[v]=true;
	      par[v]=u;
	    }
     }
	}
}

int main()
{
	cin>>n>>m;
	g.resize(n+1);
	vis.resize(n+1);
	par.resize(n+1);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=0;i<=n;i++)
	  par[i]=-1;
	
	bfs();
	
	if(par[n]==-1)
	{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;
	}
	int candidate = n;
	stack<int>stk;
	while(candidate!=-1)
	{
		stk.push(candidate);
		candidate = par[candidate];
	}
	cout<<stk.size()<<endl;
	while(!stk.empty())
	{
		cout<<stk.top()<<" "<<endl;
		stk.pop();
	}
	return 0;
}

