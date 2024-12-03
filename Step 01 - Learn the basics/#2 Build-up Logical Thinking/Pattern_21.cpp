#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;
    int col;

    cout << "Enter The Number of Rows: " << endl;
    cin >> row;

    cout << "Enter The Number of Columns: " << endl;
    cin >> col;

    cout << "Print the Pattern:- " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}