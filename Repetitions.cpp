#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin>>str;
   int n= str.length();
   int ans=1,count=1;
   for(int i=0;i<n;i++)
   {
    if(str[i]==str[i-1])
       {
           count++;
           ans= max(ans,count);
       }
    else{
    	ans= max(ans,count);
    	count=1;
	  }  
    }
  cout<<ans;
    return 0;
}


