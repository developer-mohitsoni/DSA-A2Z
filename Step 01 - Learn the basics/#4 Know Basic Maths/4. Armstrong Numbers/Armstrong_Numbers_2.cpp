#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    string s = to_string(num);

    int len = s.size();

    int sum = 0;

    // Suppose num = 153
    // s = "153"
    // len = 3
    // Then we will calculate 1^3 + 5^3 + 3^3
    // s[0] = '1', s[1] = '5', s[2] = '3'
    // s[i] - '0' converts char to int and returns the integer value of the character
    // pow(s[i] - '0', len) calculates the power of the digit raised to the number of digits
    // e.g., for '1', it will be pow(1, 3) = 1, for '5', it will be pow(5, 3) = 125, and for '3', it will be pow(3, 3) = 27
    // Finally, we sum these values and check if the sum equals the original number
    // If sum equals num, then it is an Armstrong number, otherwise it is not

    for (int i = 0; i < len; i++)
    {
        sum += pow(s[i] - '0', len); // s[i] - '0' converts char to int and returns the integer value of the character
    }
    return sum == num ? 1 : 0;
}

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    if (isArmstrong(n))
        cout << "True";
    else
        cout << "false";

    return 0;
}