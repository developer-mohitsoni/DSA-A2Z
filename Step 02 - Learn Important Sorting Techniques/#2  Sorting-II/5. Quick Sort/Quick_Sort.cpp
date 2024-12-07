//! Quick Sort Program:- (Divide and Conquer Approach)

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(nlogn) for Best Case, Worst Case and Average Case
//? S.C is O(1)

int partition(vector<int> &v, int low, int high)
{
    //* Selecting the pivot element
    int pivot = v[low];

    int i = low;  //* Index for elements smaller than the pivot
    int j = high; //* Index  for elements greater than the pivot

    while (i < j)
    {
        //* Finding the first element greater than the pivot from the left side
        while (i <= high && v[i] <= pivot)
        {
            i++;
        }

        //* Finding the first element smaller than or equal to the pivot from the right side
        while (j >= low && v[j] > pivot)
        {
            j--;
        }

        //* Swapping the elements if they are out of order
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    //* Swapping the pivot element with the element at index j
    swap(v[low], v[j]);

    //* Returning the index of the pivot element
    return j;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(v, low, high);

        quickSort(v, low, partitionIndex - 1);
        quickSort(v, partitionIndex + 1, high);
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows to sort: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the value of Vector array:- " << endl;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;

        arr.push_back(data);
    }

    cout << endl;

    cout << "Before Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}