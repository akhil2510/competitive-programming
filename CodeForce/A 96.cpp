#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int count;
   for(int i=0;i<str.length();i++)
   {
   	 count=1;
   	if(str[i]==str[i+1])
   	{
   	  int j=i;
     while(str[j]==str[j+1])  
	 {
	 	count++;
	 	j++;
	 	if(count>=7)
		 {
		  cout<<"YES";
		  return 0;
    	 }
	  }	
    }
  }
   cout<<"NO";
  return 0;
}


