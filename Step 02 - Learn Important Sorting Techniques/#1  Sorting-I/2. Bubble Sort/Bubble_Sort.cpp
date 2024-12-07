//! Bubble Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(n^2) for Worst Case and Average Case
//? T.C is O(n) for Best Case, if the array is already sorted
//? S.C is O(1) as we are not using any extra space for sorting process

void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;

        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;

        cout << "runs\n";
    }
    cout << endl;
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

    bubbleSort(arr, n);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}