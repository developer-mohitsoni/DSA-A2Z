//! Program of Minimum days to make M bouquets Leetcode:- 1482.

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O((max(arr[])-min(arr[])+1)) * N)

//* Reason => We are running a loop to check our answers that are in the range of [min(arr[]), max(arr[])]. For every possible answer, we will call the possible() function. Inside the possible() function, we are traversing the entire array, which results in O(N).

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

bool possible(vector<int> &arr, int day, int m, int k)
{
    int n = arr.size(); // size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
int roseGarden(vector<int> arr, int k, int m)
{
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); // size of the array
    if (val > n)
        return -1; // impossible case.
    // find maximum and minimum:
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    for (int i = mini; i <= maxi; i++)
    {
        if (possible(arr, i, m, k))
            return i;
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

    int k;
    cout << "Enter the total bouquets: ";
    cin >> k;

    int m;
    cout << "Enter the total flowers: ";
    cin >> m;

    int ans = roseGarden(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";

    return 0;
}