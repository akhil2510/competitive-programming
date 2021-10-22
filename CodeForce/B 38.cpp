#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
 int m,n,d,a[10001];
 cin>>n>>m>>d;
 for(int i=0;i<m*n;i++)
 {
    cin>>a[i];
 }
 sort(a,a+m*n);
 int c=(m*n)/2;
 int s=0;
 for(int i=0;i<n*m;i++)
 {
    s+=abs(a[c]-a[i]);
 }
if(s%d==0)
{
    cout<<s/d;
}
else
 {
  cout<<-1;
 }
 return 0;
}

