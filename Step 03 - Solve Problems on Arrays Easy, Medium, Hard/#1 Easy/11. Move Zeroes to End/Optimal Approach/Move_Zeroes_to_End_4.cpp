//! Move zeroes to end

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(n)
//* S.C is O(1) because no extra space takes

void moveZeroesToEnd(vector<int> &v)
{
    int j = 0; // position to place next non-zero

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[j]);
            j++;
        }
    }
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

    moveZeroesToEnd(arr);

    cout << endl;

    cout << "Array After Moving Zeroes to End: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}