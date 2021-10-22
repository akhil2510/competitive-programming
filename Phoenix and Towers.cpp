#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int n,m,x;
int H[100001];
void solve()
{
	cin>>n>>m>>x;
	cout<<"YES"<<endl;
	set<pair<int,int>>s;
	for(int i=1;i<=m;i++)
	  s.insert({0,i});
	for(int i=0;i<n;i++)
	{
		cin>>H[i];
		pair<int,int>p =*s.begin();
		s.erase(p);
		cout<<p.second<<" ";
		s.insert({p.first+H[i],p.second});
	} cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       solve();	
    }
	return 0;
}
