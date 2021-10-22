#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
    string str;
    cin>>str;
    int n = str.length();
    int a=0,count=0;
	for(int i=0;i<n;i++)
    {
      if(str[i]==')') a++;
      if(a < n/2)
	  {
      if(str[i]==')') count++;
	  }  
    }
    cout<<count<<endl;
   }
	return 0;
   }
