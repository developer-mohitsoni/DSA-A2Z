//! Program to find the square root of number in logn

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int floorSqrt(int n)
{
    int ans = 0;

    // Linear search on the answer space:

    for (long long i = 1; i <= n; i++)
    {
        long long val = i * i;

        if (val <= n * 1ll)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    return ans;
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