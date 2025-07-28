//! Program the calculate the capacity to ship packages within D days Leetcode:- 1011

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N * (sum(weights[]) - max(weights[]) + 1))

//* Reason => We are using a loop from max(weights[]) to sum(weights[]) to check all possible weights. Inside the loop, we are calling findDays() function for each weight. Now, inside the findDays() function, we are using a loop that runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

// Can you explain this below function with simple dry run?
//* This function calculates the number of days required to ship packages given a weight capacity.
//* It iterates through the weights and checks if adding the current weight exceeds the capacity.
//* If it does, it increments the day count and resets the load to the current weight.

// Simple Dry Run Example:
//* Given weights = [1, 2, 3, 4, 5]
//* and capacity = 5:
//* - Start with day = 1, load = 0
//* - Add 1 to load (load = 1)
//* - Add 2 to load (load = 3)
//* - Add 3 to load (load = 6, exceeds capacity)
//* - Increment day to 2, reset load to 3 (load = 3)
//* - Add 4 to load (load = 7, exceeds capacity)
//* - Increment day to 3, reset load to 4 (load = 4)
//* - Add 5 to load (load = 9, exceeds capacity)
//* - Increment day to 4, reset load to 5 (load = 5)

//* Result: 4 days are needed to ship all packages with the given capacity. */

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
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);

    for (int i = maxi; i <= sum; i++)
    {
        if (findDays(weights, i) <= d)
        {
            return i;
        }
    }
    // dummy return statement:
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

    int d;
    cout << "Enter the weight capacity: ";
    cin >> d;

    int ans = leastWeightCapacity(arr, d);

    cout << "The least weight capacity is: " << ans << endl;

    return 0;
}