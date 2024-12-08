//! Move zeroes to end

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(n)
//* S.C is O(1) because no extra space takes

//! Two Pointer Approach
void moveZeroesToEnd(vector<int> &v)
{
    int n = v.size();
    int i = 0;

    for (int j = 1; j < n; j++) // T.C is O(n)
    {
        // Mere i value always 0 pe hi rahegi or j value always non-zero pe hi rahegi
        if (v[i] == 0 && v[j] != 0)
        {
            swap(v[i], v[j]);
            i++;
        }
        else if (v[i] != 0)
        {
            i++;
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