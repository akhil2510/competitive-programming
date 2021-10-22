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
    lli n,x;
    cin>>n;
    vector<lli> v;
    for(lli i=0;i<n;i++)
    {
    	cin>>x;
    	v.push_back(x);
	}
    sort(v.begin(),v.end());
    lli ans=1;
    for(lli i=0;i<n;i++)
    {
      if(ans<v[i])
	     break;
      else 
	    ans += v[i] ;
	}
    cout<<ans<<endl;
	return 0;
}


