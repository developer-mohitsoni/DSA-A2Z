//! Program to find the nth root of an integer optimized version

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(logm)*(logn)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int func(int mid, int n, int m)
{
    long long ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans *= mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;

    return 0;
}

int NthRoot(int n, int m)
{
    int low = 1;  //? As the nth root of any number is always greater than 1
    int high = m; //? As the nth root of any number is always less than the number itself

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int res = func(mid, n, m);
        if (res == 1)
        {
            return mid;
        }
        else if (res == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // If nth root doesn't exist in the given range
}

int main()
{
    int n, m;
    cout << "Enter the value of n and m" << endl;
    cin >> n >> m;

    int ans = NthRoot(n, m);

    cout << "The answer is " << ans << endl;

    return 0;
}