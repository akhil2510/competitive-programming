#include <bits/stdc++.h>
using namespace std;

int min_jumps(vector<int> v, int n, vector<int> dp, int i)
{
    if (i == n - 1)
        return 0;
    if (i >= n)
        return INT_MAX;
    if (dp[i] != 0)
        return dp[n];

    int ans = INT_MAX;
    int max_jump = v[i];
    for (int jump = 1; jump <= max_jump; jump++)
    {
        int next_cell = i + jump;
        int subprob = min_jumps(v, n, dp, next_cell);
        if (subprob != INT_MAX)
            ans = min(ans, subprob + 1);
    }
    return dp[i] = ans;
}
int main()
{
    vector<int> v{3, 4, 2, 1, 2, 3, 7, 1, 1, 3};
    int n = v.size();
    vector<int> dp(n + 1, 0);
    cout << min_jumps(v, n, dp, 0) << endl;
    return 0;
}
