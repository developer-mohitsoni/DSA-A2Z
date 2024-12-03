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