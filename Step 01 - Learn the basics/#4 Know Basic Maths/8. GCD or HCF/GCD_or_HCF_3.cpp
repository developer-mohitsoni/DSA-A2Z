// Optimized Approach (Euclidean Algorithm):-

#include <bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m)
{

    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }

    if (n == 0)
        return m;
    else
        return n;
}
int main()
{

    // T.C is:- O(log min(n,m))

    int n, m;

    cout << "Enter The First Number:- " << endl;
    cin >> n;

    cout << "Enter The Second Number:- " << endl;
    cin >> m;

    cout << "GCD/HCF between " << n << " and " << m << " is:- ";

    int gcd = calcGCD(n, m);

    cout << gcd;
}