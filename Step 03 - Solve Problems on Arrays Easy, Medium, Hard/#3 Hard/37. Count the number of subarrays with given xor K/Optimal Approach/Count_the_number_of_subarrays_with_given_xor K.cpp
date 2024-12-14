//! Program to find out theCount the number of subarrays with given xor K

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(N) or O(N*logn) depending on the which data structure is used.

//* S.C is O(N)

int subarraysWithXorK(vector<int> &v, int target)
{
    int n = v.size(); // size of the given array.
    int xr = 0;
    map<int, int> mpp; // declaring the map.
    mpp[xr]++;         // setting the value of 0.
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        // prefix XOR till index i:
        xr = xr ^ v[i];

        // By formula: x = xr^k:
        int x = xr ^ target;

        // add the occurrence of xr^k
        // to the count:
        cnt += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
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