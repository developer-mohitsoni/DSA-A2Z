//! Program find the smallest divisor given a threshold. Leetcode:- 1283

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(max(arr[])*N)

//* Reason => We are using nested loops. The outer loop runs from 1 to max(arr[]) and the inner loop runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int smallestDivisor(vector<int> &arr, int limit)
{
    int n = arr.size(); // size of array.
    // Find the maximum element:
    int maxi = *max_element(arr.begin(), arr.end());

    // Find the smallest divisor:
    for (int d = 1; d <= maxi; d++)
    {
        // Find the summation result:
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ceil((double)(arr[i]) / (double)(d));
        }
        if (sum <= limit)
            return d;
    }
    return -1;
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

    int limit;
    cout << "Enter the threshold: ";
    cin >> limit;

    int ans = smallestDivisor(arr, limit);

    cout << "The smallest divisor is: " << ans << endl;

    return 0;
}