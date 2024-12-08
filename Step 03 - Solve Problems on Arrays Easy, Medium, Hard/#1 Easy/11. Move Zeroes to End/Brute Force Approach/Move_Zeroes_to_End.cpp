//! Move zeroes to end

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n) + O(x) + O(n-x) => O(2n) => O(n)
//* S.C is O(x) because takes extra space

void moveZeroesToEnd(vector<int> &v)
{
    int n = v.size();

    vector<int> temp;

    for (int i = 0; i < n; i++) // T.C is O(n)
    {
        if (v[i] != 0)
            temp.push_back(v[i]);
    }

    for (int i = 0; i < temp.size(); i++) // T.C is O(x)
    {
        v[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++) // T.C is O(n-x)
    {
        v[i] = 0;
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