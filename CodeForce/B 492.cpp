#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a,a+n);
    int diff=2*max(a[0],l-a[n-1]);
	int j=0;
   for(int i=0;i<n-1;i++)
   {
   	 j=i+1;
   	 diff= max(diff,a[j]-a[i]);
   }
    printf("%.10f",diff/2.0);
   
  return 0;
}
