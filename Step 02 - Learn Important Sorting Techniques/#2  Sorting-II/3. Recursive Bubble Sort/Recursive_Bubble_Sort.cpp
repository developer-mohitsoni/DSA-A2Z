//! Recursive Bubble Sort

//! Bubble Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(n^2) for Worst Case and Average Case
//? T.C is O(n) for Best Case, if the array is already sorted
//? S.C is O(n) due to recursion stack space

void recursiveBubbleSort(int arr[], int n)
{
    // Base Case: range == 1.
    if (n == 1)
        return;

    int didSwap = 0;

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }
    }

    // if no swapping happens.
    if (didSwap == 0)
        return;

    // Range reduced after recurs
    recursiveBubbleSort(arr, n - 1);
}

int main()
{

    int n;
    cout << "Enter the number of rows to sort: ";
    cin >> n;

    int arr[n];

    cout << "Enter the value of array:- " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "Before Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    recursiveBubbleSort(arr, n);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}