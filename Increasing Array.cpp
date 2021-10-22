#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll x = arr[0];
    ll steps = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] <= x)
            steps += (x - arr[i]);
        else
            x = arr[i];
    }
    cout << steps;
    return 0;
}
