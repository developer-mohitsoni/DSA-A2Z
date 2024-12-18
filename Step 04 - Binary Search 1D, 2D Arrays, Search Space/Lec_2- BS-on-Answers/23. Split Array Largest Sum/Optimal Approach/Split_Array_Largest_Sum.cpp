//! Program to Split Array Largest Sum Leetcode:- 410

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C =>  O(N * log(sum(arr[])-max(arr[])+1))

// Reason:- We are applying binary search on [max(arr[]), sum(arr[])]. Inside the loop, we are calling the countPartitions() function for the value of ‘mid’. Now, inside the countPartitions() function, we are using a loop that runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int countPartitions(vector<int> &arr, int maxSum)
{
    int n = arr.size(); // size of array.
    int partitions = 1;
    long long subarraySum = 0;
    for (int i = 0; i < n; i++)
    {
        if (subarraySum + arr[i] <= maxSum)
        {
            // insert element to current subarray
            subarraySum += arr[i];
        }
        else
        {
            // insert element to next subarray
            partitions++;
            subarraySum = arr[i];
        }
    }
    return partitions;
}

int largestSubarraySumMinimized(vector<int> &arr, int k)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int partitions = countPartitions(arr, mid);
        if (partitions > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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

    int m;
    cout << "Enter the number of partitions: ";
    cin >> m;

    int ans = largestSubarraySumMinimized(arr, m);

    cout << "The minimum possible sum of the largest subarray with " << m << " partitions is: " << ans << endl;

    return 0;
}