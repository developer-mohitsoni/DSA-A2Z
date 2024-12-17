//! Program to find the nth root of an integer

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(logm)*(logn)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int NthRoot(int n, int m)
{
    int low = 1;  //? As the nth root of any number is always greater than 1
    int high = m; //? As the nth root of any number is always less than the number itself

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long res = pow(mid, n);
        if (res == m)
            return mid;
        else if (res < m)
            low = mid + 1;
        else
            high = mid - 1;
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