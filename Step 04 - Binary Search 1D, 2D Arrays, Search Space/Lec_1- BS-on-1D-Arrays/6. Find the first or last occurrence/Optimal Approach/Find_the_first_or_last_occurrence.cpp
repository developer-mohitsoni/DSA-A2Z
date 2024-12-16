//! Program to find the first or last occurrence of a given number in a sorted array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n; // hypothetical index if target is greater than the last element of the array

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if the mid element is greater than or equal to the target element then update the answer and search in the left half of the array
        if (arr[mid] >= target)
        {
            ans = mid; // update the answer with the current index

            // Look for the smaller index on the left
            high = mid - 1;
        }
        else
            low = mid + 1; // if the mid element is less than the target element then search in the right half of the array
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n; // hypothetical index if target is greater than the last element of the array

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if the mid element is greater than to the target element then update the answer and search in the left half of the array
        if (arr[mid] > target)
        {
            ans = mid; // update the answer with the current index

            // Look for the smaller index on the left
            high = mid - 1;
        }
        else
            low = mid + 1; // if the mid element is less than the target element then search in the right half of the array
    }
    return ans;
}
pair<int, int> firstAndLastOccurrence(vector<int> &arr, int n, int element)
{
    int lb = lowerBound(arr, n, element);

    if (lb == n || arr[lb] != element)
        return {-1, -1};

    int ub = upperBound(arr, n, element);

    return {lb, ub - 1};
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