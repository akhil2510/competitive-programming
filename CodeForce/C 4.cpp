#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int> m;
    string s;
	while(n--)
    {
    	cin>>s;
    	if(m[s])
    	 cout<<s<<m[s]++<<endl;
    	else
    	{
		  cout<<"OK"<<endl;m[s]++;
        }
	 }
	return 0;
}
