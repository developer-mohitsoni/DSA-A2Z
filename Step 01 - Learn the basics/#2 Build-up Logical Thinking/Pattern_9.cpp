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
        // spaces
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        // spaces
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * row) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}