#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
ll ans = 0;
void solve(ll a, ll b, ll k)
{
    ll count = 0;
    for (ll i = 0; i < 32; i++)
    {
        if (((a >> i) & 1) != ((b >> i) & 1))
            count++;
    }
    if (count <= k)
        ans++;


        
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[m + 1];
    for (int i = 0; i <= m; i++)
        cin >> arr[i];
    ll p = m;
    while (p--)
    {
        solve(arr[p], arr[m], k);
    }
    cout << ans;
    return 0;
}