#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    cout<<(m*(n/m-1)+(n%m)*2)*(n/m)/2 <<" "<< ((n-m+1)*(n-m))/2  ;
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
