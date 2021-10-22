#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(char c='A';c<='Z';c++)
    {
    	int first =n;
    	int last =-1;
    	for(int i=0;i<n;i++)
    	{
    		if(str[i]==c)
    		  {
    		  	first=min(first,i);
    		  	last = max(last,i);
			  }
		}
		for(int j=first;j<=last;j++)
		{
			if(str[j]!=c) 
			 {
			  cout<<"NO"<<endl;
		       return;
			 }
		}
	}
		cout<<"YES"<<endl;
		return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
	return 0;
}
