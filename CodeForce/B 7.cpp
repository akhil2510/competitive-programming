#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void solve()
{
    map<string, string> d;
    int n, m;
    string a, b;
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b;
        d[a] = b;
    }
    while (n--)
    {
        cin >> a;
        cout << (d[a].size() < a.size() ? d[a] : a) << " ";
    }
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
