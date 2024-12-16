//! Program to find out how many times array has been rotated

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findKRotation(vector<int> &arr)
{
    int n = arr.size();

    int low = 0, high = n - 1;

    int ans = INT_MAX;

    int index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // search space is already sorted
        // then arr[low] will always be
        // the minimum in that search space:

        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            // Eliminate left half:
            low = mid + 1;
        }
        else
        { // if right part is sorted:
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
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

    int ans = findKRotation(arr);

    cout << "Array has been rotated " << ans << " times." << endl;

    return 0;
}