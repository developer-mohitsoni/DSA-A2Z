#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;

    cout << "Enter The Number of Rows: " << endl;
    cin >> row;

    cout << "Print the Pattern:- " << endl;

    /*To convert any digit into alphabet:- */
    /*
    int digit;
    cin>>digit;

    char newChar = (digit + 65)-1;
    */

    char newChar = (row + 65) - 1;

    for (int i = 0; i < row; i++)
    {
        for (char ch = newChar - i; ch <= newChar; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}