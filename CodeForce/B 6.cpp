#include<bits/stdc++.h>
using namespace std;
int i,n,f,s;
int main()
{
 cin>>n;
 int a[n],b[n];
 for(i=0; i<n; i++)
 {
 cin>>a[i];
 b[i]=a[i];
 }
sort(b, b+n);
 
for(i=0; i<n; i++)
{
 if(a[i]!=b[i])
 { 
     f=i; break;
 }
}
for(i=n-1; i>=0; i--)
{
 if(a[i]!=b[i])
  {s=i; break;}
}
reverse(a+f, a+s+1);
 
for(i=0; i<n; i++)
{
 if(a[i]!=b[i])
 {
 cout<<"no"; return 0;
 }
}
cout<<"yes"<<endl<<f+1<<" "<<s+1;
return 0;
}