//! Insertion Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(n^2) for Worst Case and Average Case
//? T.C is O(n) for Best Case, if the array is already sorted
//? S.C is O(n) due to recursion stack space

void recursiveInsertionSort(int arr[], int i, int n)
{
    // Reaches upto last index of the array
    if (i == n)
        return; // Base Case
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }
    recursiveInsertionSort(arr, i + 1, n); // Recursive Call to sort remaining part of the array
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

    recursiveInsertionSort(arr, 0, n);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}