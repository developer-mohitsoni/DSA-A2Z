// Optimized Approach in O(sqrt(n))

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
    // Then we will check from 1 to sqrt(n)
    // If n % i == 0, then i is a divisor of n
    // For example, if n = 51, then 1 3 17 51

    // We will print all such divisors
    // We will loop from 1 to sqrt(n) and check if n % i == 0
    // If it is true, we will increment the count of divisors of n
    // If n is divisible by i, then n / i is also a divisor of n
    // For example, if n = 51, then 1 is a divisor and n / 1 = 51 is also a divisor
    // Similarly, if n = 51, then 3 is a divisor and n / 3 = 17 is also a divisor
    // We will add both i and n / i to the count

    // Dry run with n = 49:
    // How much iterations will be there?
    // 1, 2, 3, 4, 5, 6, 7
    // Why? Because sqrt(49) = 7
    // So we will check from 1 to 7

    
    // i = 1, n % 1 == 0, count = 1 (1 and 49)
    // i = 2, n % 2 != 0, count remains 1
    // i = 3, n % 3 != 0, count remains 1
    // i = 4, n % 4 != 0, count remains 1
    // i = 5, n % 5 != 0, count remains 1
    // i = 6, n % 6 != 0, count remains 1
    // i = 7, n % 7 != 0, count remains 1

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
                count++;
        }
    }
    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    // In this case T.C is O(sqrt(N))

    return 0;
}