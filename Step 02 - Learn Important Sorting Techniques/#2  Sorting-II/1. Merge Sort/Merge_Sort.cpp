//! Merge Sort Program:-

#include <bits/stdc++.h>
using namespace std;

//? T.C is O(nlogn) for Best Case, Worst Case and Average Case
//? S.C is O(n) because of the temporary array

void Merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }

    //* Copying remaining elements of left subarray to the temporary array
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }

    //* Copying remaining elements of right subarray to the temporary array
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }

    //* Copying the temporary array to the original array
    for (auto i : temp)
    {
        v[low++] = i;
    }
}

void mergeSort(vector<int> &v, int low, int high)
{
    if (low == high)
        return;

    int mid = (low + high) / 2;

    mergeSort(v, low, mid); // logn

    mergeSort(v, mid + 1, high); // logn

    Merge(v, low, mid, high); // n

    // So, T.C is O(nlogn)
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

    mergeSort(arr, 0, n - 1);

    cout << endl;

    cout << "After Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}