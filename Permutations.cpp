#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 1;
    if (n == 4)
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        bool flag = false;
        for (int i = n; i > 1;)
        {
            cout << i << " ";
            i = i - 2;
            if (i == 1 || i == 2)
            {
                cout << i << " ";
                for (int j = n - 1; j > 0 && j != i; j -= 2)
                    cout << j << " ";
                flag = true;
            }
            if (flag)
                break;
        }
    }
}