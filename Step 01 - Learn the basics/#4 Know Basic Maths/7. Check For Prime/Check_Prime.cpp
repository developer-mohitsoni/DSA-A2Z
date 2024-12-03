// Extreme Brute Force Approach in O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int count = 0;

    cout << "Number " << n << " is:- ";

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    // In this case T.C is O(N)

    return 0;
}