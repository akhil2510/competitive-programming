#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

void solve()
{
        int n;
        cin >> n;
        vector<int> h(n);

        for (int i = 0;i < n; i++){
            cin >> h[i];
        }
        sort(h.begin(), h.end());

        if(n == 2){
            cout << h[0] << " " << h[1] << "\n";
            return;
        }

        int pos = -1, mn = INT_MAX;

        for (int i = 1;i < n; i++){
            if(mn > abs(h[i] - h[i - 1]))
			{
                pos = i;
                mn = abs(h[i] - h[i - 1]);
            }
        }
        
        for (int i = pos;i < n; i++){
            cout << h[i] << " ";
        }
        for(int i = 0;i < pos; i++){
            cout << h[i] << " ";
        }

        cout <<  endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
     int t=1;
    cin>>t;
   
    while(t--)
    {
       solve();
    }
	return 0;
}
