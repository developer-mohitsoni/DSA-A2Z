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

    for (int i = 0; i < 2 * row - 1; i++)
    {
        for (int j = 0; j < 2 * col - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * col - 2) - j;
            int down = (2 * row - 2) - i;

            cout << (row - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}