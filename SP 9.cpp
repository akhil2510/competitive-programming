 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
         int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        int m = 0;
        int second =-1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            
            m = max(m, mp[a[i]]);
        }
   
        if (m == n)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
 
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                second = i;
                break;
            }
        }
 
       
        for (int i = 1; i < n; i++)
        {  
            if (a[i] != a[0]) // connect one with all other different districts
            {
                cout<<1<<" "<<i+1<<"\n";
            }
            // now connect remaining districts 
			//which are same for district one with another different district like
			// different dist as node and all same districts as child
            else
			{
                cout<<second+1<<" "<<i+1<<"\n";
            }
                
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t=1;
   cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}
