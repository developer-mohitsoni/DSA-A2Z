#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int temp = n;

    int revNum = 0;

    while (temp > 0)
    {
        int lastDigit = temp % 10;

        revNum = (revNum * 10) + lastDigit;

        temp = temp / 10;
    }

    if (revNum == n)
        cout << "true";
    else
        cout << "false";

    return 0;
}