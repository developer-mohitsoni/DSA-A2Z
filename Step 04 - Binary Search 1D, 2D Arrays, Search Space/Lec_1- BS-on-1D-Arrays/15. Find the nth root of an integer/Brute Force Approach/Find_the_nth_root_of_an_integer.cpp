//! Program to find the nth root of an integer

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(Nth Root(N)) for best and average case
//* T.C => O(M) for worst case
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int NthRoot(int n, int m)
{
    for (int i = 1; i <= m; i++)
    {
        if (pow(i, n) == m)
        {
            return i;
        }
        else if (pow(i, n) > m)
        {
            break;
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