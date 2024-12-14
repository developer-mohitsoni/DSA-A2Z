//! Program to find out theCount the number of subarrays with given xor K

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1)

int subarraysWithXorK(vector<int> &v, int target)
{
    int n = v.size(); // size of the given array.
    int cnt = 0;

    // Step 1: Generating subarrays:
    for (int i = 0; i < n; i++)
    {
        // step 2:calculate XOR of all
        int xorr = 0;
        for (int j = i; j < n; j++)
        {

            xorr = xorr ^ v[j];

            // step 3:check XOR and count:
            if (xorr == target)
                cnt++;
        }
    }
    return cnt;
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
    cout << "Enter the target value: ";
    cin >> target;

    int ans = subarraysWithXorK(arr, target);

    cout << "The number of subarrays with given xor K is: " << ans << endl;

    return 0;
}