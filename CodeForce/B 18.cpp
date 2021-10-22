#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int solve()
{
	int m, n;
	cin >> m >> n;
	int a[m][n], b[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> b[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (!b[i][j])
			{
				for (int k = 0; k < m; k++)
					a[k][j] = 0;
				for (int k = 0; k < n; k++)
					a[i][k] = 0;
			}
		}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			bool count = 0;
			for (int k = 0; k < m; k++)
				count |= a[k][j];
			for (int k = 0; k < n; k++)
				count |= a[i][k];
			if (b[i][j] == count)
				;
			else
			{
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
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