#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int n,a,b;
pair<int,int> p[200002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a>>b;
    	p[i]={a,b};
	}
    sort(p,p+n);
    for(int i=1;i<n;i++)
    {
    	if(p[i].first>p[i-1].first && p[i].second <p[i-1].second)
    	 {
    	 	cout<<"Happy Alex";
    	 	return 0;
		 }
	}
    cout<<"Poor Alex";
	return 0;
}
