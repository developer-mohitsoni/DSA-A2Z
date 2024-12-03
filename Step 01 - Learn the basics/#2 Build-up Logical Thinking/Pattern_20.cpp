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
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int iniSpace = 2;

    for (int i = 0; i < row - 1; i++)
    {
        // Stars
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "*";
        }
        // Spaces
        for (int i = 0; i < iniSpace; i++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "*";
        }
        iniSpace += 2;
        cout << endl;
    }
}