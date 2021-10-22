#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,s;
	cin>>str;
	s=str[0];
	if((str[0]-32)>= 65 )
    	s=str[0]-32;
	str.replace(0,1,s);
	cout<<str;
}

