//! Program to find out the 2SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Slightly Optimized Solution)------------------------------

//* T.C is O(n) + O(nlogn) = O(nlogn) (nlogn is for sorting the array).

//* S.C is O(1).

//* Using Two Pointer / Greedy Approach.
int twoSum(vector<int> &v, int key)
{
    int left = 0;
    int right = v.size() - 1;

    sort(v.begin(), v.end());

    while (left < right)
    {
        int sum = v[left] + v[right];

        if (sum == key)
        {
            return 1;
        }
        else if (sum < key)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return 0;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of target: " << endl;
    cin >> k;

    int ans = twoSum(arr, k);

    if (ans)
        cout << "Target is Present " << endl;
    else
        cout << "Target is not Present " << endl;

    return 0;
}