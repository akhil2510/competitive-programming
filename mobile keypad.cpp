#include <bits/stdc++.h>
using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve(string input, string output, int i)
{
    if (input[i] == '\0')
    {
        cout << output << endl;
        return;
    }
    int curr_dig = input[i] - '0';
    if (curr_dig == 0 || curr_dig == 1)
    {
        solve(input, output, i + 1);
    }
    for (int k = 0; k < keypad[curr_dig].size(); k++)
    {
        solve(input, output + keypad[curr_dig][k], i + 1);
    }
    return;
}

int main()
{
    string input;
    cin >> input;
    string output;
    solve(input, output, 0);
    return 0;
}
