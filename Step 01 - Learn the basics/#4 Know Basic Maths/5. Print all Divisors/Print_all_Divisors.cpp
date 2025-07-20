// Brute Force Approach in O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "All Divisors of " << n << " are:-" << endl;

    // Suppose n = 565876
    // Then we will check from 1 to n
    // If n % i == 0, then i is a divisor of n
    // For example, if n = 565876, then 1 2 4 193 386 733 772 1466 2932 141469 282938 565876
    // We will print all such divisors

    // What is here:- n % i in hinglish
    // n % i means "n ko i se divide karne par jo remainder aata hai, agar wo 0 hai to i is a divisor of n"
    // In other words, if n is divisible by i, then i is a divisor of n
    // So we will loop from 1 to n and check if n % i == 0
    // If it is true, we will print i as a divisor of n

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    // In this case, T.C is O(N)

    return 0;
}