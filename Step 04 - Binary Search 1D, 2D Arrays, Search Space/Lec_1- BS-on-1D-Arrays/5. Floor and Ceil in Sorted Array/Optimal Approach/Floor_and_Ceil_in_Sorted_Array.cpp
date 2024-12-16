//! Program to find Floor and Ceil in Sorted Array using Optimal Force Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Force Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findFloor(vector<int> &arr, int n, int value)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // maybe an answer
        if (arr[mid] <= value)
        {
            ans = arr[mid];
            // look for smaller index on the left
            low = mid + 1;
        }
        else
        {
            high = mid - 1; // look on the right
        }
    }
    return ans;
}

int findCeil(vector<int> &arr, int n, int value)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // maybe an answer
        if (arr[mid] >= value)
        {
            ans = arr[mid];
            // look for smaller index on the left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int value)
{
    int f = findFloor(arr, n, value);
    int c = findCeil(arr, n, value);
    return make_pair(f, c);
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
    cout << "Enter the element to find its floor and ceil: ";
    cin >> element;

    pair<int, int> ans = getFloorAndCeil(arr, n, element);

    cout << "The floor and ceil of " << element << " is at index: " << ans.first << " and " << ans.second << endl;

    return 0;
}