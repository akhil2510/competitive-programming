#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                int j = i;
                while (arr[i]--)
                {
                    ans[j--] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
    }
    return 0;
}
