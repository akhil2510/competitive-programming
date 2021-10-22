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
    lli maxx=0,temp=0,arr[n],i;
    set<lli> s;
    bool flag =false;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(s.find(arr[i])==s.end())
    	{
	     s.insert(arr[i]);
	    }
	    else 
	    {
	    	flag= true;
	    	temp = s.size();
	         maxx = max(maxx,temp);
	    	s.clear();
	    	s.insert(arr[i]);
	   }
    }
		if(!flag)
		{
			cout<<s.size();
			return 0;
		}
       else
     	cout<<maxx;
	return 0;
}
