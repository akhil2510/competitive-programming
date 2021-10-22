#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
//Recursive
int solve(string s1, string s2, int i, int j)
{
    if (i == s1.length() or j == s2.length())
        return 0;
    if (s1[i] == s2[j])
        return 1 + solve(s1, s2, i + 1, j + 1);
    int op1 = solve(s1, s2, i, j + 1);
    int op2 = solve(s1, s2, i + 1, j);
    return max(op1, op2);
}
int solveTD(string s1, string s2, int i, int j, vector<vector<int>> &dp)
{
    if (i == s1.length() or j == s2.length())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[i] == s2[j])
        return 1 + solveTD(s1, s2, i + 1, j + 1, dp);
    int op1 = solveTD(s1, s2, i, j + 1, dp);
    int op2 = solveTD(s1, s2, i + 1, j, dp);
    return dp[i][j] = max(op1, op2);
}
int solveBU(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int i = n1, j = n2;
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                int op1 = dp[i][j + 1];
                int op2 = dp[i + 1][j];
                dp[i][j] = max(op1, op2);
            }
        }
    }
    cout << endl
         << "Printing LCS : " << endl;
    vector<char> result;
    while (i != 0 and j != 0)
    {
        if (dp[i][j] == dp[i][j - 1])
            j--;
        else if (dp[i][j] == dp[i - 1][j])
            i--;
        else
        {
            result.push_back(s1[i - 1]);
            i--;
            j--;
        }
    }
    reverse(result.begin(), result.end());
    for (char x : result)
        cout << x << endl;
    return dp[n1][n2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        string s1 = "ASDWE";
        string s2 = "ASDFG";
        int n1 = s1.length();
        int n2 = s2.length();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        //cout<<solve(s1,s2,0,0)<<endl;
        // cout<<solveTD(s1,s2,0,0,dp)<<endl;
        cout << solveBU(s1, s2) << endl;
    }
    return 0;
}
