#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, x;
    cin >> s;
    x = s;
    while (m--)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (s[1] == '1')
                    x[0] = '1';
            }
            else
            {
                if (s[i] == '0')
                {
                    if ((s[i + 1] == '0') and (s[i - 1] == '1'))
                        x[i] = '1';
                    else if ((s[i + 1] == '1') and (s[i - 1] == '0'))
                        x[i] = '1';
                }
            }
        }
        s = x;
    }
    cout << s << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}