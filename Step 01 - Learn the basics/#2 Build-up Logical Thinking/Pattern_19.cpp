#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;

    cout << "Enter The Number of Rows: " << endl;
    cin >> row;

    cout << "Print the Pattern:- " << endl;

    int iniSpace = 0;

    for (int i = 0; i < row; i++)
    {
        // stars
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniSpace; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        iniSpace += 2;
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (row - i - 1); j++)
        {
            cout << " ";
        }
        // stars (opposite)
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}