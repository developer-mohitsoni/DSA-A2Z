#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;

    cout << "Enter The Number of Rows: " << endl;
    cin >> row;

    cout << "Print the Pattern:- " << endl;

    for (int i = 0; i < row; i++)
    {
        // digits
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 0; j < 2 * (row - i - 1); j++)
        {
            cout << " ";
        }
        // digits (opposite of first one digit)
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}