#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int temp = n;

    int digits = (int)(log10(temp) + 1);

    int sum = 0;

    // 5432 lastDigit = 2
    // then 0 + pow(2, 4) = 16
    // then 16 + pow(3, 4) = 16 + 81 = 97
    // then 97 + pow(4, 4) = 97 + 256 = 353
    // then 353 + pow(5, 4) = 353 + 625 = 978
    while (temp > 0)
    {
        int lastDigit = temp % 10;

        sum = sum + pow(lastDigit, digits);

        temp = temp / 10;
    }

    if (sum == n)
        cout << "true";
    else
        cout << "false";

    return 0;
}