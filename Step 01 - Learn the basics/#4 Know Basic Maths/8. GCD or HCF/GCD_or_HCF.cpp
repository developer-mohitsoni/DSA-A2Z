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

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    cout << gcd;

    // T.C is:- O(min(n1,n2))
}