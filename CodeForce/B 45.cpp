#include<bits/stdc++.h>
using namespace std;
string s="abcd";
int i;
int main()
{
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	 cout<<s[i%4];
	 return 0;
}
