#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Pass By Reference with Pointers
void doSomething(float *num)
{ /*Original value comes*/

    /*These all are modification in the original value*/
    cout << *num << endl;

    *num += 5.2;

    cout << *num << endl;

    *num += 7.15;

    cout << *num << endl;
}

int main()
{
    float *num = new float(10.5); // Dynamically allocated memory for a float

    doSomething(num); /*original number address goes*/

    cout << *num << endl; /*Now it print 22.85*/

    delete num; // Free the dynamically allocated memory

    return 0;
}