#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nbgX[4]={0,0,1,-1};
ll nbgY[4]={1,-1,0,0};
ll n,m,answer=0;
ll vis[1010][1010];
char grid[1010][1010];
/*
The problem asks us to calculate the number of rooms on the map,
 in other words, to calculate the number of groups consisting of connected dots.

 One way to solve this problem is to consider the given grid as a graph 
where the floor characters represent the nodes and the vertical/horizontal
 adjacencies represent the edges. 
In this way, we transform this problem into a classical "connected component counting"
 problem that can be solved with some kind of graph search algorithm, 
such as depth-first search , breadth-first search or even floodfill.
*/
bool isValid(ll y,ll x)
{
	if(x<0 or y<0 or x>=m or y>=n or grid[y][x]=='#')
	  return false;
	return true;
}

void dfs(ll y,ll x)
{
	vis[y][x]=1;
	for(ll i=0;i<4;i++)
  {
  	ll newX = x + nbgX[i];
  	ll newY = y + nbgY[i];
  	
  	if(isValid(newY,newX))
  	{
  		if(!vis[newY][newX])
  		 dfs(newY,newX);
	}	
  }
}
int main()
{
	cin>>n>>m;
    for(ll i=0;i<n;i++)	
	{
	for(ll j=0;j<m;j++)	
 	 {
 	 	cin>>grid[i][j];
 	 	vis[i][j]=0;
	  }
	}
	 for(ll i=0;i<n;i++)	
	{
	for(ll j=0;j<m;j++)	
 	 {
 	   if(grid[i][j]=='.' and !vis[i][j])
		{
 	 	dfs(i,j);
	     answer++;
	   }
    }
	}
	cout<<answer<<endl;
	return 0;
}

