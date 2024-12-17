//! Program find the smallest divisor given a threshold. Leetcode:- 1283

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(log(max(arr[]))*N)

//* Reason => We are applying binary search on our answers that are in the range of [1, max(arr[])]. For every possible divisor ‘mid’, we call the sumByD() function. Inside that function, we are traversing the entire array, which results in O(N).

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int sumByD(vector<int> &arr, int div)
{
    int n = arr.size(); // size of array
    // Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int limit)
{
    int n = arr.size();

    if (n > limit)
        return -1;

    int low = 1, high = *max_element(arr.begin(), arr.end());

    // Apply binary search:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
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