//! Problem to find the number that appears once, and the other numbers appears twice

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(n) + O(n) + O(n) => O(n).

//* S.C is O(input).

int appearsOnce(vector<int> &v)
{
    int n = v.size();

    int appearsOnce;

    int max_Element = *max_element(v.begin(), v.end()); // T.C is O(n)

    int hash[max_Element] = {0};

    for (int i = 0; i < n; i++) // T.C is O(n)
    {
        hash[v[i]]++;
    }

    for (int i = 0; i < n; i++) // T.C is O(n)
    {
        if (hash[v[i]] == 1)
            appearsOnce = v[i];
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