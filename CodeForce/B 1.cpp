#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i = 0, t;
    cin >> n >> t;
    string str;
    cin >> str;
    while (t--)
    {
         i=0;
        while (i<n)
        {
        	if(str[i] < str[i + 1])
			{
            swap(str[i], str[i + 1]);
            i+=2;
           }
           else
            i++;
        }
       
    }
    cout << str;
    return 0;
}
