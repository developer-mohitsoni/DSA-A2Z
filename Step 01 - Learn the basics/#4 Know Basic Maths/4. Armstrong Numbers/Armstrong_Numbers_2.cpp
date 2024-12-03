#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    string s = to_string(num);

    int len = s.size();

    int sum = 0;

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