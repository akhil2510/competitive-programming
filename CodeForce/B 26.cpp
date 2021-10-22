
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,i,j,k=0;
cin>>n>>m;
int a[n];
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<m;i++)
{
 cin>>j;
 if(j>=a[k]&&k<n)
  ++k;
}
 cout<<n-k;
 return 0;
}


