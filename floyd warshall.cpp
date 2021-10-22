#include<bits/stdc++.h>
using namespace std;

int shortDistGraph(int grpah[n][n])
{
	 int dist[n];
	 dist[n-1]=0;
	 for(int i=n-2;i>=0;i--)
	 {
	 	dist[i]=INF;
	 	for(int j=i;j<n;j++)
	 	{
	 		if(graph[i][j]==INF)continue;
	 		dist[i]= min(dist[i],graph[i][j]+dist[j]);
		 }
	 }
	 return dist[0];
}


