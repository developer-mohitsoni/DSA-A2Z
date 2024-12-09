//! Program to find the maximum consecutive ones in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n) + O(n) => O(n).

//* S.C is O(n).

int maxConsecutiveOnes(vector<int> &v)
{
    int maxi = 0;

    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
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

    int maxiConsecutiveOnes = maxConsecutiveOnes(arr);

    cout << "\nThe maximum consecutive 1 in the array is: " << maxiConsecutiveOnes << endl;

    return 0;
}