//! Program of Minimise the Maximum distance between the gas stations.

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Better Approach ---------------------------

//* T.C => O(nlogn + klogn)
// Reason => Insert operation of priority queue takes logn time complexity. O(nlogn) for inserting all the indices with distance values and O(klogn) for placing the gas stations.

//* S.C => O(n-1)+O(n-1)
// Reason => The first O(n-1) is for the array to keep track of placed gas stations and the second one is for the priority queue.

//! NOTE: Binary Search is works only on sorted arrays

long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();

    vector<int> howMany(n - 1, 0);

    priority_queue<pair<long double, int>> pq;

    // insert the first n-1 elements into pq
    // with respective distance values:
    for (int i = 0; i < n - 1; i++)
    {
        pq.push({arr[i + 1] - arr[i], i});
    }

    // Pick and place k gas stations:
    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
        // Find the maximum section
        // and insert the gas station:
        auto tp = pq.top();
        pq.pop();
        int secInd = tp.second;

        // insert the current gas station:
        howMany[secInd]++;

        long double inidiff = arr[secInd + 1] - arr[secInd];
        long double newSecLen = inidiff / (long double)(howMany[secInd] + 1);
        pq.push({newSecLen, secInd});
    }

    return pq.top().first;
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