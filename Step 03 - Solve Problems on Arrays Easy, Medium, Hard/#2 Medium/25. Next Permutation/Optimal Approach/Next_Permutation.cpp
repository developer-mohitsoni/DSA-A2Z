//! Program to find the Next Permutation
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(3N) => O(1)

//* S.C is O(1).

void nextPermuation(vector<int> &v)
{
    int n = v.size();

    int index = -1;
    // We starting the loop from n-2 here because we are comparing the current element with the next element. If We start loop from n-1 then we will get out of bound exception while comparing with the current element.
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }

    for (int i = n - 1; i >= index; i--)
    {
        if (v[i] > v[index])
        {
            swap(v[i], v[index]);
            break;  
        }
    }

    reverse(v.begin() + index + 1, v.end());
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

    nextPermuation(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}