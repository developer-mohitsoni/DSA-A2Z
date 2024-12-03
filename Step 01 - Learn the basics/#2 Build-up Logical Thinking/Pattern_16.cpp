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
            char ch = i + 'A';

            cout << ch;
        }
        cout << endl;
    }
    /*
    for (int i = 0; i < row; i++)
    {
        // For every row
        char ch = i + 'A';

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    */
}