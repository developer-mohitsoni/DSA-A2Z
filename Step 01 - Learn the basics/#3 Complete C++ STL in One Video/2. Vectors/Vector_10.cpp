#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Accessing all elements of a vector;

    vector<int> v9;
    v9.push_back(5);
    v9.push_back(10);
    v9.push_back(15);
    v9.push_back(20);
    v9.push_back(25);

    // Using Loop:-
    int n = v9.size();

    for (int i = 0; i < n; i++)
    {
        cout << v9[i] << " ";
    }

    cout << endl;

    // Using Iterator:-

    vector<int>::iterator it = v9.begin();

    for (int i = 0; i < n; i++)
    {
        cout << it[i] << " ";
    }

    cout << endl;

    // Using iterator inside loop:-
    for (vector<int>::iterator it2 = v9.begin(); it2 != v9.end(); it2++)
    {
        cout << *(it2) << " ";
    }

    cout << endl;

    // Another way of using iterator:-
    /*
    It automatically assign to a vector iterator we don't need to define the data type like:- int,char,float,double, etc.

    auto is a keyword which assign the data according to the type of data either int,char,float,double,iterator etc...
    */

    auto it4 = v9.begin();

    advance(it4, 3);      // Moving the iterator to 4th position from beginning
    cout << *it4 << endl; // Printing the element at 4th

    for (auto it4 = v9.begin(); it4 != v9.end(); it4++)
    {
        cout << *(it4) << " ";
    }

    cout << endl;

    // Using for each loop:-
    for (auto it : v9)
    {
        cout << it << " ";
    }

    return 0;
}