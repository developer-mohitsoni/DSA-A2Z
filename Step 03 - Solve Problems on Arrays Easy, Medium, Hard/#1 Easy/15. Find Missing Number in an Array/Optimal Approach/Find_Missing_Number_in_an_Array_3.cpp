//! Program to find the missing number in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(n).

//* S.C is O(1).

int MissingNumber(vector<int> &v)
{
    int n = v.size();

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    int totalSum = n * (n + 1) / 2;

    int missingNum = totalSum - sum;

    return missingNum;
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