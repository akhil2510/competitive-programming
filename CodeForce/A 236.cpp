#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<char> s;
  string str;
  cin>>str;
  for(int i=0;i<str.length();i++)
  {
  	if(s.find(str[i])==s.end())
  	 s.insert(str[i]);
  }
   if(s.size()%2) cout<<"IGNORE HIM!";
   else cout<< "CHAT WITH HER!";
  return 0;
}


