#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,u,q;
    cin>>n>>m>>u>>q;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        cin>>a[i][j];
      cout<<endl;
	}
	while(u--)
	{
	 int k,r1,c1,r2,c2;
	 cin>>k>>r1>>c1>>r2>>c2;
      for(int i=r1;i<=r2;i++)
	  {
	  	for(int j=c1;j<=c2;j++)
	  	 {
	  	   a[i][j]=a[i][j]+k;	
		 }
	  }
    }
    int p[n][m];
    p[0][0]=a[0][0];
    p[1][0]=a[0][0]+a[1][0];
    p[0][1]=a[0][0]+a[0][1];
    for(int i=1;i<n;i++)
    {
      for(int j=1;j<m;j++)
        {
        	p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j];
		}
	}
    while(q--)
    {
    	int x,y,c,d;
    	cin>>x>>y>>c>>d;
    	cout<<p[c][d]-p[x][y]+a[x][y];
    	cout<<endl;
	}
	cout<<"Ans "<<endl;
	
   for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=m;j++)
        {
		cout<<p[i][j]<<" ";	
        }
	  cout<<endl;
   }
	return 0;
}
