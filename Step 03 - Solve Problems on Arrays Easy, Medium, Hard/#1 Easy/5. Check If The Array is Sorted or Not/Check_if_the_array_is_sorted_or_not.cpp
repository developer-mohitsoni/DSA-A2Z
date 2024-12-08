//! Check if the array is sorted or not

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n)
//* S.C is O(1)

int isSorted(vector<int> &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
            continue;

        else
            return false;
    }
    return true;
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

    int check = isSorted(arr, n);

    if (check == true)
        cout << "\nThe array is sorted." << endl;
    else
        cout << "\nThe array is not sorted." << endl;

    return 0;
}