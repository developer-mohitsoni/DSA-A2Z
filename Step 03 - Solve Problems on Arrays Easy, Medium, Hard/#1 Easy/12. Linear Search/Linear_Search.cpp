//! Program to find Linear Search

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n)
//* S.C is O(1) because no extra space takes

vector<int> linearSearch(vector<int> &v, int target)
{
    int flag = 0;

    int n = v.size();
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    return {flag, index};
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

    int target;
    cout << "Enter the element to be searched: ";
    cin >> target;

    vector<int> ans = linearSearch(arr, target);

    if (ans[0])
    {
        cout << "Element found at index: " << ans[1] << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}