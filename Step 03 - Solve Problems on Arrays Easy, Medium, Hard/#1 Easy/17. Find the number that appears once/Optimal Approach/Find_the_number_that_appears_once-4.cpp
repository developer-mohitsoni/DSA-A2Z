//! Problem to find the number that appears once, and the other numbers appears twice

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n)

//* S.C is O(1).

int appearsOnce(vector<int> &v)
{
    int n = v.size();

    int appearsOnce = 0;

    for (int i = 0; i < n; i++)
    {
        appearsOnce ^= v[i];
    }
    return appearsOnce;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int numberAppearOnce = appearsOnce(arr);

    cout << "\nThe number that appears once in the array is: " << numberAppearOnce << endl;

    return 0;
}