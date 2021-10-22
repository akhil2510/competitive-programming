#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define mod 1000000007

long long binpow(long long a, long long b, long long m) 
{
    a %= m;
    long long res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      ll x,y,n;
      cin>>x>>y>>n;
      cout<<binpow(x,y,n)<<endl;
    }
	return 0;
}