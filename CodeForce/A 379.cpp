#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,s;
    cin>>m>>s;
    int count=m,k=0;
    while(m>0)
    {
    	m += k;
    	count += m/s ;
        k = m%s ;
    	m = m/s ;
	}
    cout<<count;
	return 0;
}
