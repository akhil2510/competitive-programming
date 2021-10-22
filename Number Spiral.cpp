#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int row, col;
        cin >> row >> col;
        long long int c;
        if (row > col)
        {
            c = (row * row) - (row - 1);
            if (row % 2)
                cout << c - (row - col);
            else
                cout << c + (row - col) << " ";
        }
        else if (col > row)
        {
            c = (col * col) - (col - 1);
            if (col % 2)
                cout << c + (col - row) << " ";
            else
                cout << c - (col - row) << " ";
        }
        else
        {
            c = (row * row) - (row - 1);
            cout << c << " ";
        }
        cout << endl;
    }
}
