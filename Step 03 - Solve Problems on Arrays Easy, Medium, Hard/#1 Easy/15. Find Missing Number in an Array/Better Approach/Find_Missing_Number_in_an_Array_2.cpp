//! Program to find the missing number in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C is O(n) + O(n) => O(n).

//* S.C is O(n).

int MissingNumber(vector<int> &v)
{
    int missingNumber;

    int n = v.size();

    int hash[n + 1] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        hash[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            missingNumber = i;
        }
    }

    return missingNumber;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array in range 1 to n: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missingNumber = MissingNumber(arr);

    cout << "\nThe missing number in the array is: " << missingNumber << endl;

    return 0;
}