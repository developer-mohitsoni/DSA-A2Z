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
            char alpha = j + 'A';

            cout << alpha << " ";
        }
        cout << endl;
    }

    /*We can also done as:-*/
    /*
    for(int i=0; i<row; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    */
}