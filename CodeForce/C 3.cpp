#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,z,n,k=0;
	cin>>n>>m;
	if(n>m+1 || 2*n +2 <m )
		cout<<"-1"<<"\n";
	else
	{
		while(n>0 || m>0)
		{
			if(m>n && k<2 || z == 0)
			{
				z = 1;
				k++;
				m--;
			}
			else
			{
				n--;				
				k =0;
				z = 0;
			}
			cout<<z;
		}
	}
	cout<<endl;
	return 0;
}

