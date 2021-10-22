#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
#define loop(a,b) for(lli i=a;i<b;i++)
vector<int> v;
int josephus(vector<int>&list,int start,int k)
{
	if(list.size()==1)
	{
	   v.push_back(list[0]);
     	return  list[0];
    }
    start = (start+k)%list.size() ;
	v.push_back(*(list.begin()+start));
	list.erase(list.begin()+start);
	
	return josephus(list,start,k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>list;
    for(int i=1;i<=n;i++) 
	    list.push_back(i);
    josephus(list,0,1);
	for(int i=0;i<v.size();i++)
	 cout<<v[i]<<" ";
	return 0;
}


