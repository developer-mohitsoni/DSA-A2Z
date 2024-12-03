#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

int maxx(int a, int b)
{
    // 5 >= 6
    if (a >= b)
        return a;

    // looking for a return line

    // yadi pehla return line execute ho gaya toh baki ke sare return lines ignore ho jayenge.

    // Or yadi mera phela number bada nai hua dusre number se toh definitely dusra number bada hoga phele se.

    return b;
}

int main()
{
    int num1 = 5, num2 = 6;

    int maximum = maxx(num1, num2);

    cout << "Maximum is: " << maximum;
    return 0;
}