//! Program of Minimise the Maximum distance between the gas stations.

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C =>  O(k*n) + O(n)

//* S.C => O(n-1)

//! NOTE: Binary Search is works only on sorted arrays

long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();

    vector<int> howMany(n - 1, 0);

    // Pick and place k gas stations:

    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
        // Find the maximum section
        // and insert the gas station:

        long double maxSection = -1;
        int maxInd = -1;
        for (int i = 0; i < n - 1; i++)
        {
            long double diff = arr[i + 1] - arr[i];
            long double sectionLength =
                diff / (long double)(howMany[i] + 1);
            if (sectionLength > maxSection)
            {
                maxSection = sectionLength;
                maxInd = i;
            }
        }
        // insert the current gas station:
        howMany[maxInd]++;
    }
    // Find the maximum distance i.e. the answer:
    long double maxAns = -1;
    for (int i = 0; i < n - 1; i++)
    {
        long double diff = arr[i + 1] - arr[i];
        long double sectionLength =
            diff / (long double)(howMany[i] + 1);
        maxAns = max(maxAns, sectionLength);
    }
    return maxAns;
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