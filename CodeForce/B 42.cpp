#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a,b;
  cin>>a>>b;
  int x[26]={},y[26]={};
  for(char i:a)
     x[i-'a']++;
  for(char i:b)
     y[i-'a']++;
  int r=0;
  bool f=1;
  for(int i=0;i<26;++i)
  {
    r+=min(x[i],y[i]);
    if(x[i]==0&&y[i]>0)
	  f=0;
  }
  cout<<(f?r:-1)<<'\n';
  return 0;
}
