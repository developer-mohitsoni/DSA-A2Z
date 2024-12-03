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

    /*Outer Loop(Row)       Inner Loop(Column)*/
    /*
        i=0                     j=0 to j<col
        i=1                     j=1 to j<col
        i=2                     j=2 to j<col
        i=3                     j=3 to j<col
        i=4                     j=4 to j<col
        |                       |
        |                       |
        |                       |
        |                       |
        i=n                     j=n to j<col
    */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*We can also done as:- */
    /*
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    */
}