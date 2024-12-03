#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int temp = n;

    // E.g:- log10(100) = 2 (because (10^2 = 100))
    int count = (int)(log10(n) + 1); // log10(n) + 1 is the formula to count the digits in a number.

    cout << "Total Digits in a Number are:- " << count << endl;

    return 0;
}