#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
#define loop(a,b) for(lli i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str,a="hello";
    cin>> str;
    int count=0,j=0; 
     for(int i=0;i<str.length();i++)
     {
     	if(str[i]==a[j])
     	{
     		count++;
     		j++;
		 }
		if(count==5)
		{
		  cout<<"YES";
           return 0;
        }
	 }
    cout<<"NO";
	return 0;
}
