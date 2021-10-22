#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count1=0,count2=0;
    cin>>n;
    int ind=0,pos1,pos2;
    while(n--)
    {
    	int t;
    	ind++;
    	cin>>t;
    	if(t%2==0)
    	{
    	  pos2=ind;
		  count2++;
	    }
		else
		{
		    pos1 = ind;
		 count1++;
	    }
	}
    if(count1==1)cout<<pos1;
    else cout<<pos2;
	return 0;
}
