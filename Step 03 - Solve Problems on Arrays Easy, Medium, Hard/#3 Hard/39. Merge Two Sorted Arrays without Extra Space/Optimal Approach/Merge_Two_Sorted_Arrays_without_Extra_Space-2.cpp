//! Program to Merge Two Sorted Arrays without using Extra Space

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O((n+m)*log(n+m))

// Reason:- The gap is ranging from n+m to 1 and every time the gap gets divided by 2. So, the time complexity of the outer loop will be O(log(n+m)). Now, for each value of the gap, the inner loop can at most run for (n+m) times. So, the time complexity of the inner loop will be O(n+m). So, the overall time complexity will be O((n+m)*log(n+m)).
//* S.C is O(1)

void swapIfGreater(vector<long long> &arr, vector<long long> &brr, int ind1, int ind2, bool bothInArr)
{
    // Check the array condition explicitly
    if (bothInArr)
    {
        if (arr[ind1] > arr[ind2])
        {
            swap(arr[ind1], arr[ind2]);
        }
    }
    else
    {
        if (arr[ind1] > brr[ind2])
        {
            swap(arr[ind1], brr[ind2]);
        }
    }
}

void mergeTwoSortedArrays(vector<long long> &arr, vector<long long> &brr, int n, int m)
{
    // Total length of the imaginary array:
    int len = n + m;

    // Initial gap:
    int gap = (len / 2) + (len % 2);

    while (gap > 0)
    {
        // Place pointers:
        int left = 0, right = left + gap;

        while (right < len)
        {
            if (left < n && right < n)
            {
                // Both in arr
                swapIfGreater(arr, brr, left, right, true);
            }
            else if (left < n && right >= n)
            {
                // One in arr, one in brr
                swapIfGreater(arr, brr, left, right - n, false);
            }
            else
            {
                // Both in brr
                swapIfGreater(brr, brr, left - n, right - n, true);
            }
            left++, right++;
        }

        // Update gap
        if (gap == 1)
            break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    vector<long long> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the number of elements in the second array: ";
    cin >> m;

    vector<long long> brr(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    mergeTwoSortedArrays(arr, brr, n, m);

    cout << "The Merged Arrays are:" << endl;

    cout << "arr[] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "brr[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    return 0;
}