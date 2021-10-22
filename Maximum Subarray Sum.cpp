#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
#define loop(a,b) for(lli i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    lli sum=0,i,m=-9e18;
    vector<lli>v(n);
    for(lli j=0;j<(lli)v.size();j++)
    {
    	cin>>i;
    	sum= max(sum+i,i);
    	m= max(m,sum);
	}
    cout<<m<<endl;
	return 0;
}
