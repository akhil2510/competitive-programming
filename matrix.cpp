#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
  int arr[5][5],p,q;
  for(int i=1;i<6;i++)
  {
  	for(int j=1;j<6;j++)
    {
    	cin>>arr[i][j];
	}
  }
  for(int i=1;i<6;i++)
  {
  	for(int j=1;j<6;j++)
    {
    	if(arr[i][j]==1)
    	{
    	 cout<< abs(3-i)+abs(3-j)<<endl;
    	 return;
		}
	}
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    solve();
	return 0;
}
