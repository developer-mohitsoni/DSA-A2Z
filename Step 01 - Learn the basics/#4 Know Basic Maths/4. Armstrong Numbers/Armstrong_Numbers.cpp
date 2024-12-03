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