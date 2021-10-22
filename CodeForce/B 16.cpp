#include<bits/stdc++.h>
using namespace std;
string s,t;
map<char,int>S,T;
int i,j;
int main()
{
 cin>>s>>t;
 for(char c:s)
  ++S[c];
 for(char c:t)
  ++T[c];
 if(S==T)
 {
   cout<<"array\n";
   return 0;
 }
 for(char c:t)
 {
   if(T[c]>S[c])
     {
      cout<<"need tree\n";
      return 0;
     }
 }
 for(;i<s.size()&&j<t.size();)
 {
    if(s[i]==t[j])
      ++i,++j;
    else 
      ++i;
    if(j==t.size())
    {
     cout<<"automaton\n";
     return 0;
    }
 }
cout<<"both\n";
return 0;
}