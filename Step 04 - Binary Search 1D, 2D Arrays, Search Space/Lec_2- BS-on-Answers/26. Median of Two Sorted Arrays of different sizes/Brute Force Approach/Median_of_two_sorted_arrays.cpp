//! Program of Median of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C =>  O(n1+n2)
// Reason => We traverse through both arrays linearly.

//* S.C => O(n1+n2)
// Reason => We are using an extra array of size (n1+n2) to solve this problem.

//! NOTE: Binary Search is works only on sorted arrays

double median(vector<int> &arr, vector<int> &brr)
{
    // size of two given arrays:
    int n1 = arr.size(), n2 = brr.size();

    vector<int> crr;

    // apply the merge step:

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (arr[i] < brr[j])
            crr.push_back(arr[i++]);
        else
            crr.push_back(brr[j++]);
    }

    // copy the left-out elements:
    while (i < n1)
        crr.push_back(arr[i++]);
    while (j < n2)
        crr.push_back(brr[j++]);

    // Find the median

    int n = n1 + n2;

    if (n % 2 == 1)
    {
        return (double)crr[n / 2];
    }

    double median = ((double)crr[n / 2] + (double)crr[(n / 2) - 1]) / 2.0;

    return median;
}

int main()
{
    int n1;
    cout << "Enter the size of array: ";
    cin >> n1;

    vector<int> arr(n1);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr[i];

    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;

    vector<int> brr(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
        cin >> brr[i];

    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(arr, brr) << '\n';

    return 0;
}