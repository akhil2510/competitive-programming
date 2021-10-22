#include <std/c++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int days = 0;
    while (k != 0)
    {
        if (a[i] != b[j])
        {
            k--;
        }
        i = (i - 1) % n + 1;
        j = (j - 1) % m + 1;
        days++;
    }
    cout << days;
}
