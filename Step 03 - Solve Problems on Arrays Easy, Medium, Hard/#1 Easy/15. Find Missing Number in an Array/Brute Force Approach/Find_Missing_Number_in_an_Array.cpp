//! Program to find the missing number in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(N^2).

//* S.C is O(1).

int MissingNumber(vector<int> &v)
{
    int n = v.size();

    int missingNumber;

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        // Inner loop j = 0 se j < n-1 tak isliye rakha gaya hai, kyunki vector ke size ko accommodate karne ke liye yeh correct range hai.
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            missingNumber = i;
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