//! Recursive Selection Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(n^2) for Best Case, Worst Case, and Average Case
//? S.C is O(n) due to recursion stack space

void recursiveSelectionSort(int arr[], int n, int start)
{
    // Base case: If we reach the end of the array
    if (start >= n - 1)
        return;

    // Find the index of the minimum element in the remaining array
    int minn = start;
    for (int j = start + 1; j < n; j++)
    {
        if (arr[j] < arr[minn])
            minn = j;
    }

    // Swap the found minimum element with the current start
    swap(arr[start], arr[minn]);

    // Recursive call for the next part of the array
    recursiveSelectionSort(arr, n, start + 1);
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

    recursiveSelectionSort(arr, n, 0);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}