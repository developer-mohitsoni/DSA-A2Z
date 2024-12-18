//! Program of Painter's Partitions

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C =>  O(N * log(sum(arr[])-max(arr[])+1))

// Reason:- We are applying binary search on [max(arr[]), sum(arr[])]. Inside the loop, we are calling the countPainters() function for the value of ‘mid’. Now, inside the countPainters() function, we are using a loop that runs for N times.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int countPainters(vector<int> &boards, int maxSum)
{
    int n = boards.size(); // size of array.
    int painters = 1;
    long long boardsPainter = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardsPainter + boards[i] <= maxSum)
        {
            // allocate board to current painter
            boardsPainter += boards[i];
        }
        else
        {
            // allocate board to next painter
            painters++;
            boardsPainter = boards[i];
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    // Apply binary search:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int painters = countPainters(boards, mid);
        if (painters > k)
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

    int k;
    cout << "Enter the number of painters: ";
    cin >> k;

    int ans = findLargestMinDistance(arr, k);

    cout << "The largest minimum distance between boards that can be painted by " << k << " painters is: " << ans << endl;

    return 0;
}