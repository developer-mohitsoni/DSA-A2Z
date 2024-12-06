// This code snippet calculates and prints all the factorial numbers that are less than or equal to a given number 'n'.
#include <bits/stdc++.h>
using namespace std;
long long fact(long long x)
{
    if (x <= 1)
        return 1;

    return x * fact(x - 1);
}
int main()
{
    long long n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Factorial of " << n << " is:- " << fact(n) << endl;

    return 0;
}
