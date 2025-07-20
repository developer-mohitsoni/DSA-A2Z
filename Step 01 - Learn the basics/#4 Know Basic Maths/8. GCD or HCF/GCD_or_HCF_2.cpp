// Brute Force Approach:-

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2;

    cout << "Enter The First Number:- " << endl;
    cin >> n1;

    cout << "Enter The Second Number:- " << endl;
    cin >> n2;

    cout << "GCD/HCF between " << n1 << " and " << n2 << " is:- ";

    int gcd;

    // This is just as a reverse approach to easily find gcd of number from end which is first highest common divisor of both number.

    // Suppose n1 = 12 and n2 = 15
    // Then we will check from min(n1, n2) to 1
    // If n1 % i == 0 and n2 % i == 0, then i is a divisor of both n1 and n2
    // For example, if n1 = 12 and n2 = 15, then the common divisors are 1 and 3
    // We will print all such common divisors

    // Why from reverse?
    // Because we want to find the greatest common divisor (GCD) or highest common factor (HCF)
    // The GCD/HCF is the largest number that divides both n1 and n2
    // So we will loop from min(n1, n2) to 1 and check if n1 % i == 0 and n2 % i == 0
    // If it is true, we will assign i to gcd and break the loop

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd;

    // T.C is:- O(min(n1,n2))
}