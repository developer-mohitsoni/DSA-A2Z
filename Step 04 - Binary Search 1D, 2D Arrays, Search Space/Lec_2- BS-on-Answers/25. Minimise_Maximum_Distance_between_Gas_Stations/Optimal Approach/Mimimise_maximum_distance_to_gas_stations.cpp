//! Program of Minimise the Maximum distance between the gas stations.

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(n*log(Len)) + O(n)

// Reason => We are applying binary search on the answer space. For every possible answer, we are calling the function numberOfGasStationsRequired() that takes O(n) time complexity. And another O(n) for finding the maximum distance initially

//* S.C => O(1) as we are using no extra space to solve this problem.

//! NOTE: Binary Search is works only on sorted arrays

int numberOfGasStationsRequired(long double dist, vector<int> &arr)
{
    int n = arr.size(); // size of the array
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int numberInBetween = ((arr[i] - arr[i - 1]) / dist);
        if ((arr[i] - arr[i - 1]) == (dist * numberInBetween))
        {
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size(); // size of the array
    long double low = 0;
    long double high = 0;

    // Find the maximum distance:
    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, (long double)(arr[i + 1] - arr[i]));
    }

    // Apply Binary search:
    long double diff = 1e-6;
    while (high - low > diff)
    {
        long double mid = (low + high) / (2.0);
        int cnt = numberOfGasStationsRequired(mid, arr);
        if (cnt > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
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
    cout << "Enter the number of gas stations: ";
    cin >> k;

    long double ans = minimiseMaxDistance(arr, k);

    cout << "Minimum maximum distance between gas stations: " << fixed << setprecision(2) << ans << endl;

    return 0;
}