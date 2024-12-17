//! Program to find the square root of number in logn

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int floorSqrt(int n)
{
    int low = 1, high = n;
    // Binary search on the answers:
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n))
        {
            // eliminate the left half:
            // ans = mid;
            low = mid + 1;
        }
        else
        {
            // eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int number;
    cout << "Enter the number to find the perfect square root: "
         << endl;
    cin >> number;

    int ans = floorSqrt(number);

    cout << "The floor of perfect square root of " << number << " is: " << ans << endl;

    return 0;
}