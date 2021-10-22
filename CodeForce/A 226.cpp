#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0,n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<str.length();i++)
    {
    	if(str[i]==str[i-1])
		  count++;
	}
	cout<<count;
	return 0;
}
