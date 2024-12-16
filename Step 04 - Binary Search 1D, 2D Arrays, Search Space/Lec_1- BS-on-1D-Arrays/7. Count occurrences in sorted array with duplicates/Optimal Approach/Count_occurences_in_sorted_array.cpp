//! Program to count the occurences of a given number in a sorted array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN) + O(logN) = O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int firstOccurrence(vector<int> &arr, int n, int value)
{
    int low = 0, high = n - 1;

    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == value)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int value)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == value)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}
pair<int, int>
firstAndLastOccurrence(vector<int> &arr, int n, int element)
{
    int first = firstOccurrence(arr, n, element);
    int last = lastOccurrence(arr, n, element);

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
        return 0;

    int numberOfTimesElementOccurs = ans.second - ans.first + 1;

    cout << "The element " << element << " occurs " << numberOfTimesElementOccurs << " times in the array" << endl;

    return 0;
}