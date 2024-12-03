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
        for (int j = 0; j < row - i; j++)
        {

            // for every column
            char alpha = j + 'A';

            cout << alpha << " ";
        }
        cout << endl;
    }

    /*We can also dones as:- */
    /*
    for(int i=0; i<row; i++){
        for(char ch='A'; ch<='A'+(row-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    */
}