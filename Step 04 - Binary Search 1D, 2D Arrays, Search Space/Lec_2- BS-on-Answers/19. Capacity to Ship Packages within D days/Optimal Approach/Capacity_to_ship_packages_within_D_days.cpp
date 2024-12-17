//! Program the calculate the capacity to ship packages within D days Leetcode:- 1011

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Force Approach ---------------------------

//* T.C => O(N * log(sum(weights[]) - max(weights[]) + 1))

//* Reason => We are applying binary search on the range [max(weights[]), sum(weights[])]. For every possible answer ‘mid’, we are calling findDays() function. Now, inside the findDays() function, we are using a loop that runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findDays(vector<int> &weights, int cap)
{
    int days = 1; // First day.
    int load = 0;
    int n = weights.size(); // size of array.
    for (int i = 0; i < n; i++)
    {
        if (load + weights[i] > cap)
        {
            days += 1;         // move to next day
            load = weights[i]; // load the weight.
        }
        else
        {
            // load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Find the maximum and the summation:
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int numberOfDays = findDays(weights, mid);
        if (numberOfDays <= d)
        {
            // eliminate right half
            high = mid - 1;
        }
        else
        {
            // eliminate left half
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

    int d;
    cout << "Enter the weight capacity: ";
    cin >> d;

    int ans = leastWeightCapacity(arr, d);

    cout << "The least weight capacity is: " << ans << endl;

    return 0;
}