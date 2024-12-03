#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Pass By Value
void doSomething(float num)
{ /*copy comes*/

    /*These all are modification in the copy not original value*/
    cout << num << endl;

    num += 5.2;

    cout << num << endl;

    num += 7.15;

    cout << num << endl;
}

int main()
{
    float num = 10.50;

    doSomething(num); /*copy goes, original number didn't go*/

    /*this original number must be somewhere in the memory, and memory did not go*/

    cout << num << endl; /*Why it shows 10.50 ?,
                            we already modify it because this is "Pass By Value"*/

    return 0;
}