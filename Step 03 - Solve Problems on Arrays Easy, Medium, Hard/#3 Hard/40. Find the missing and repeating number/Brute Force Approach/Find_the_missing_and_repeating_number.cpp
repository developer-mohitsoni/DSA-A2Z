//! Program to Find the Missing and Repeating Numbers

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1)
vector<int> findMissingRepeatingNumbers(vector<int> &v)
{
    int n = v.size(); // size of the array
    int repeating = -1, missing = -1;

    // Find the repeating and missing number:
    for (int i = 1; i <= n; i++)
    {
        // Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == i)
                cnt++;
        }

        if (cnt == 2)
            repeating = i;
        else if (cnt == 0)
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