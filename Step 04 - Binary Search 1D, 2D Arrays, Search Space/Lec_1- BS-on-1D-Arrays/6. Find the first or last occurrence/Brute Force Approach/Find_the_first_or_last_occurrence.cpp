//! Program to find the first or last occurrence of a given number in a sorted array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

pair<int, int> firstAndLastOccurrence(vector<int> &arr, int n, int element)
{
    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    return {first, last};
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int element;
    cout << "Enter the element to find: ";
    cin >> element;

    pair<int, int> ans = firstAndLastOccurrence(arr, n, element);

    if (ans.first == -1)
        cout << "Element not found in the array" << endl;
    else
        cout << "First Occurrence: " << ans.first << " Last Occurrence: " << ans.second << endl;

    return 0;
}