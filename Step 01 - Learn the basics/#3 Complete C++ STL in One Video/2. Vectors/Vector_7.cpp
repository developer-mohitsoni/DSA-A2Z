#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Accessing Vector Using iterator

    vector<int> v6;
    v6.push_back(2);
    v6.push_back(4);
    v6.push_back(6);
    v6.push_back(8);
    v6.push_back(10);

    /*This iterator act as a pointer to store the address of the memory of first element*/

    vector<int>::iterator it = v6.begin();

    cout << *(it) << endl; /*When we dereference this will gives the first element of the vector,
        Output:- 2*/

    vector<int> v7;
    v7.push_back(2);
    v7.push_back(4);
    v7.push_back(6);
    v7.push_back(8);
    v7.push_back(10);

    /*This iterator act as a pointer to store the address of the memory of first element*/
    vector<int>::iterator it2 = v7.begin();

    it2++; /*When we increase the address of the memeory it will point to the next memory location the vector*/

    cout << *(it2) << endl; /*Output:- 4*/

    vector<int> v8;
    v8.push_back(2);
    v8.push_back(4);
    v8.push_back(6);
    v8.push_back(8);
    v8.push_back(10);

    /*This iterator act as a pointer to store the address of the memory of first element*/
    vector<int>::iterator it3 = v8.begin();

    cout << endl;

    it3 = it3 + 2;          /*This will point to the memeory address of first element + 2 i.e v(2) */
    cout << *(it3) << endl; /*Output:- 6*/

    for (int i = 0; i < v8.size(); i++)
    {
        cout << *(it3 + i) << " ";
    }
    /*Output:- 2 4 6 8 10*/

    return 0;
}