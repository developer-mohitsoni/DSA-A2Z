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
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}