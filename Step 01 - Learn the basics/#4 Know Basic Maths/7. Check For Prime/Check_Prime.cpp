// Extreme Brute Force Approach in O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int count = 0;

    cout << "Number " << n << " is:- ";

    // Suppose n = 51
    // Then we will check from 1 to n
    // If n % i == 0, then i is a divisor of n
    // For example, if n = 51, then 1 3 17 51
    // We will print all such divisors

    // Check for prime number
    // A prime number is a number that has exactly two distinct positive divisors: 1 and itself.
    // For example, 2, 3, 5, 7, 11 are prime numbers because they can only be divided by 1 and themselves without leaving a remainder.
    // If a number has more than two divisors, it is not prime.

    // For example, 4 has three divisors: 1, 2, and 4, so it is not prime.
    // Similarly, 6 has four divisors: 1, 2, 3
    // and 6, so it is not prime.
    // Therefore, we will loop from 1 to n and check if n % i == 0
    // If it is true, we will increment the count of divisors of n
    // If count is equal to 2, then it is a prime number
    // If count is not equal to 2, then it is not a prime number

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    // In this case T.C is O(N)

    return 0;
}