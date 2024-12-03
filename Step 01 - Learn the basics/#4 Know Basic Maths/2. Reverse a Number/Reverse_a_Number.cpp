#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int revNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10; // This will give the remainder of the number when divided by 10

        revNum = (revNum * 10) + lastDigit;

        n = n / 10;
    }

    cout << "Reverse Number are:- " << revNum << endl;

    return 0;
}