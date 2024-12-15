//! Program to Find the Missing and Repeating Numbers

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(N)

//* S.C is O(1)

//! Using XOR
vector<int> findMissingRepeatingNumbers(vector<int> &v)
{
    int n = v.size(); // size of the array

    int xr = 0;

    // Step 1: Find XOR of all elements:
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ v[i];
        xr = xr ^ (i + 1);
    }

    // Step 2: Find the differentiating bit number:
    int number = (xr & ~(xr - 1));

    // Step 3: Group the numbers:
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        // part of 1 group:
        if ((v[i] & number) != 0)
        {
            one = one ^ v[i];
        }
        // part of 0 group:
        else
        {
            zero = zero ^ v[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        // part of 1 group:
        if ((i & number) != 0)
        {
            one = one ^ i;
        }
        // part of 0 group:
        else
        {
            zero = zero ^ i;
        }
    }

    // Last step: Identify the numbers:
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == zero)
            cnt++;
    }

    if (cnt == 2)
        return {zero, one};
    return {one, zero};
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