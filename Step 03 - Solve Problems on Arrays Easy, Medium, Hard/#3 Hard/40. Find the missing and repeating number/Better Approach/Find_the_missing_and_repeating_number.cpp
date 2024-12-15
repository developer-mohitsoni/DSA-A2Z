//! Program to Find the Missing and Repeating Numbers

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(2N)

//* S.C is O(N)

//! Using Hashing
vector<int> findMissingRepeatingNumbers(vector<int> &v)
{
    int n = v.size();      // size of the array
    int hash[n + 1] = {0}; // hash array

    // update the hash array:
    for (int i = 0; i < n; i++)
    {
        hash[v[i]]++;
    }

    // Find the repeating and missing number:
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = findMissingRepeatingNumbers(arr);

    cout << "The repeating and missing numbers are: " << ans[0] << " " << ans[1] << endl;

    return 0;
}