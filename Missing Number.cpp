#include <iostream>
using namespace std;

long long Missing(long long a[], long long n)
{
    long long sum = ((n + 1) * (n)) / 2;

    for (long long i = 0; i < n - 1; i++)
        sum -= a[i];
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n = 0;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    cout << Missing(a, n);
    return 0;
}