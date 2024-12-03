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
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    /*We can also done as:- */
    /*
    for(int i=1; i<=row; i++){
        for(int j=row; j>=i; j--){
            cout<<i;
        }
        cout<<endl;
    }
    */
    /*We can also done as:- */
    /*
    for(int i=1; i<=row; i++){
        for(int j=row; j>i-1; j--){
            cout<<i;
        }
        cout<<endl;
    }
    */
}