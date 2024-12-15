//! Program to Reverse Pairs

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(2N*logN)

//* S.C is O(N)
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && arr[i] > 2 * arr[right])
            right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}
int mergeSort(vector<int> &arr, int low, int high)
{
    int cnt = 0;

    if (low >= high)
        return cnt;

    int mid = (low + high) / 2;

    cnt += mergeSort(arr, low, mid); // left half

    cnt += mergeSort(arr, mid + 1, high); // right half

    cnt += countPairs(arr, low, mid, high); // merging sorted halves

    merge(arr, low, mid, high); // merging sorted halves

    return cnt;
}
int team(vector<int> &v)
{
    int n = v.size(); // size of the array

    return mergeSort(v, 0, n - 1);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = team(arr);

    cout << "The number of inversions are: " << ans << endl;

    return 0;
}