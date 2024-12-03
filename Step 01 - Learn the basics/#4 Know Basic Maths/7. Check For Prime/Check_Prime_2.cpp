// Optimized Approach in O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    int count = 0;

    cout << "Number " << n << " is:- ";

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
                count++;
        }
    }
    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    // In this case T.C is O(sqrt(N))

    return 0;
}