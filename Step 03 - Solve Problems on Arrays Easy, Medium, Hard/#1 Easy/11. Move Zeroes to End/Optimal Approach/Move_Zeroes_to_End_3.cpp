//! Move zeroes to end

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(n)
//* S.C is O(1) because no extra space takes

void moveZeroesToEnd(vector<int> &v)
{
    int n = v.size();

    int left = 0;

    for (int right = 0; right < n; right++)
    {
        // if the current element is 0, do nothing and if the current element is non-zero, swap it with the left element which points to 0 at that time
        if (v[right] == 0)
            continue; // ignore the 0 element

        else
        {
            swap(v[right], v[left]); // place non-zero at left side of
            left++;                  // array and increment left pointer
        }
    }
    return;
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