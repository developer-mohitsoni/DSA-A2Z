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

    // 153 lastDigit = 3
    // then 0 + pow(3, 3) = 27
    // then 27 + pow(5, 3) = 27 + 125 = 152
    // then 152 + pow(1, 3) = 152 + 1 = 153
    // 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153
    // 123 is not an Armstrong number because 1^3 + 2^3 + 3^3 = 36 != 123
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