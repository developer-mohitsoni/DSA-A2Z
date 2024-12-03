#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;

    cout << "Enter The Number of Rows: " << endl;
    cin >> row;

    cout << "Print the Pattern:- " << endl;

    int start;

    for (int i = 0; i < row; i++)
    {
        // If the row is even starts with 1
        if (i % 2 == 0)
            start = 1;
        // If the row is odd starts with 0
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;

            // Now flip the start
            //  i.e 0->1 and 1->0 this below line...
            start = 1 - start;
        }
        cout << endl;
    }
}