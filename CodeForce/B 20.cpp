#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void solve()
{
    string str;
    cin >> str;
    ll n = str.length();
    ll has[26] = {0};
    for (ll i = 0; i < n; i++)
    {
        has[str[i] - 'a']++;
    }
    ll count = 0;
    for (int i = 0; i < 26; i++)
        if (has[i] % 2)
            count++;
    (count and (count - 1) % 2) ? cout << "Second" : cout << "First";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
    return 0;
}