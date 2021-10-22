#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
map<int, vector<int> > mp;
int main()
{
 int n;
 cin>>n;
 for(int i=0; i<n; i++)
 {
    cin>>arr[i];
    mp[arr[i]].push_back(i);
 }
vector<pair<int, int> > vp;
 for(auto x:mp)
 {
    set<int> si;
    int l=0;
    for(int i=1; i<x.second.size(); i++)
	{
        si.insert(x.second[i]-x.second[i-1]);
        l=x.second[i]-x.second[i-1];
    }
    if(si.size()==1 || x.second.size()==1)
        vp.push_back(pair<int, int>(x.first, l));
 }
 cout<<vp.size()<<'\n';
 for(int i=0; i<vp.size(); i++)
    cout<<vp[i].first<<" "<<vp[i].second<<'\n';
return 0;
}

