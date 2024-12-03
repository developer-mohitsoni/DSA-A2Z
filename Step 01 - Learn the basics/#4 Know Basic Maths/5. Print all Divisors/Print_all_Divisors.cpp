// Brute Force Approach in O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "All Divisors of " << n << " are:-" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    // In this case, T.C is O(N)

    return 0;
}