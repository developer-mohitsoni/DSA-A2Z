//! Program to find out the single element in sorted array using XOR

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = singleNonDuplicate(arr);

    cout << "Single Element in the array is: " << ans << endl;

    return 0;
}