 #include<bits/stdc++.h>
using namespace std;
int a[105],b,c,d,i,n;
double k,p;
int main()
{
  cin>>n;
  p=3.141592653589793;
  for(i=1;i<=n;i++)
    cin>>a[i];
  sort(a,a+n+1);
  for(i=n;i>0;i=i-2)
     k=k+p*(a[i]*a[i]-a[i-1]*a[i-1]);
  cout<<k;
 return 0;
}