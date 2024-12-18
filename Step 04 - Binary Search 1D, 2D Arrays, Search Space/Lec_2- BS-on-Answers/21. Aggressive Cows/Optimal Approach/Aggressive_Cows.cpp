//! Program the find the min. distance between the cows such that the min. distance is Maximum (Aggressive Cows)

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(NlogN) + O(N * log(max(stalls[])-min(stalls[])))

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

bool canWePlace(vector<int> &stalls, int dist, int cows)
{
    int n = stalls.size(); // size of array
    int cntCows = 1;       // no. of cows placed
    int last = stalls[0];  // position of last placed cow.
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last >= dist)
        {
            cntCows++;        // place next cow.
            last = stalls[i]; // update the last location.
        }
        if (cntCows >= cows)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();

    sort(stalls.begin(), stalls.end());

    int low = 1, high = stalls[n - 1] - stalls[0];
    // apply binary search:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canWePlace(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> stalls(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> stalls[i];

    int k;
    cout << "Enter the number of cows: ";
    cin >> k;

    int ans = aggressiveCows(stalls, k);

    cout << "The maximum possible minimum distance is: " << ans << "\n";

    return 0;
}