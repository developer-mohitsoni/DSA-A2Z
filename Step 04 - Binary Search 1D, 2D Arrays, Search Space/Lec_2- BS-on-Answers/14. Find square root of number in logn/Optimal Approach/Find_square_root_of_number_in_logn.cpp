//! Program to find the square root of number in logn

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Force Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int floorSqrt(int n)
{
    int ans = sqrt(n);

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