#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      v.push_back(make_pair(x,i));
	}
    sort(v.begin(),v.end());
    for(auto ele:v)
     cout<<ele.second+1<<" ";
	return 0;
}

