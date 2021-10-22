#include<iostream>
using namespace std;
int mod=1e6+3;
int s(char c)
{
	if(c=='>')
	  return 8;
	if(c=='<')
	  return 9;
	if(c=='+')
	  return 10;
	if(c=='-')
	  return 11;
	if(c=='.')
	  return 12;
	if(c==',')
	  return 13;
	if(c=='[')
	  return 14;
	return 15;
}
int main()
{
	string ss;cin>>ss;
	int l=ss.length(),sum=0;
	for(int i=0;i<l;i++)
	{sum=((sum<<4)+s(ss[i]))%mod;//cout<<sum<<endl;
	}
	cout<<(sum%mod);
}
