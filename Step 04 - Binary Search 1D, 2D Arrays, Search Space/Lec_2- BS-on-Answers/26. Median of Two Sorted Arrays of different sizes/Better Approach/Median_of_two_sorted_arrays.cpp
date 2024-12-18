//! Program of Median of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Better Approach ---------------------------

//* T.C =>  O(n1+n2)
// Reason => We traverse through both arrays linearly.

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

double median(vector<int> &arr, vector<int> &brr)
{
    // size of two given arrays:
    int n1 = arr.size(), n2 = brr.size();
    int n = n1 + n2; // total size
    // required indices:
    int ind2 = n / 2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ind1el = -1, ind2el = -1;

    // apply the merge step:
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] < brr[j])
        {
            if (cnt == ind1)
                ind1el = arr[i];
            if (cnt == ind2)
                ind2el = arr[i];
            cnt++;
            i++;
        }
        else
        {
            if (cnt == ind1)
                ind1el = brr[j];
            if (cnt == ind2)
                ind2el = brr[j];
            cnt++;
            j++;
        }
    }

    // copy the left-out elements:
    while (i < n1)
    {
        if (cnt == ind1)
            ind1el = arr[i];
        if (cnt == ind2)
            ind2el = arr[i];
        cnt++;
        i++;
    }
    while (j < n2)
    {
        if (cnt == ind1)
            ind1el = brr[j];
        if (cnt == ind2)
            ind2el = brr[j];
        cnt++;
        j++;
    }

    // Find the median:
    if (n % 2 == 1)
    {
        return (double)ind2el;
    }

    return (double)((double)(ind1el + ind2el)) / 2.0;
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