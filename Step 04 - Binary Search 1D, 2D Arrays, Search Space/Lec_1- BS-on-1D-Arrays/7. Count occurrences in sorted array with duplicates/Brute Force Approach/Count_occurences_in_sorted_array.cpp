//! Program to count the occurences of a given number in a sorted array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int count(vector<int> &arr, int n, int value)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        // counting the occurrences:
        if (arr[i] == value)
            cnt++;
    }
    return cnt;
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

    int ans = count(arr, n, element);

    if (ans == 0)
        cout << "Element not found in the array" << endl;
    else
        cout << "Count of Occurrence: " << ans << endl;

    return 0;
}