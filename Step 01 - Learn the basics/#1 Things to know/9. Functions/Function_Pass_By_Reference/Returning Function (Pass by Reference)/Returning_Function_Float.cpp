#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Returning Function Pass By Reference (Returning Float)

/*
The error in the code is that the doSomething() function returns a copy of the num parameter, not the original value of num. This is because the num parameter is passed to the function by value.

To fix this error, the doSomething() function should return a reference to the num parameter, instead of a copy of the parameter. This can be done by declaring the num parameter as a reference in the function declaration.
*/
float &doSomething(float &num)
{ /*Reference comes*/

    /*These all are modification in the original value*/

    if (num <= 10.25)
    {
        num += 5.50;
        return num;
    }

    return num;
}

int main()
{
    float num;

    cin >> num;

    doSomething(num) = 10.20; // num ka reference return ho raha hai, toh num = 10.20 ho jayega

    cout << num << endl;

    return 0;
}