//! Selection Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(n^2) for Best Case, Worst Case and Average Case
//? S.C is O(1) as we are not using any extra space for sorting process

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minn = i;

        for (int j = i + 1; j <= n-1; j++)
        {
            if (arr[j] < arr[minn])
                minn = j;
        }
        swap(arr[minn], arr[i]);
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

    selectionSort(arr, n);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}