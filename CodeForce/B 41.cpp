#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<double>p;
	double x,y,x1,y1;
	int n;
	
	cin>>n>>x>>y;
	while(n--)
	{
		cin>>x1>>y1;
		if ((x-x1)!=0)
		{
			p.insert((y-y1)/(x-x1));
		}
		else p.insert(123456);
	}
	cout<<p.size();
}
