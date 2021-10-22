#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	set<long long>result;
	while(n--)
	{
		int x;
		cin>>x;
		if(result.size()==0)
		{
			result.insert(x);
			continue;
		}
		vector<long long>temp;
		for(auto it=result.begin();it!=result.end();it++)
		{
			temp.push_back(*it +x);
		}
		result.insert(x);
		for(int i=0;i<temp.size();i++)
		{
			result.insert(temp[i]);
		}		
	}
	cout<<result.size()<<endl;
	for(auto it=result.begin();it!=result.end();it++)
	{
		cout<<*it<<" ";
	}
}


