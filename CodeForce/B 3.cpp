#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+2];
    for(int i=1;i<=m+1;i++)
      cin>>arr[i];
    bitset<8>b(arr[m+1]);
    int ans= b.count();
    int count=0;
    for(int i=1;i<=m;i++)
    {
    	bitset<8> a(arr[i]^arr[m+1]);
    	int p = a.count();

    	if(p<=k)
		  count++;
	}
    cout<<count;
	return 0;
}
