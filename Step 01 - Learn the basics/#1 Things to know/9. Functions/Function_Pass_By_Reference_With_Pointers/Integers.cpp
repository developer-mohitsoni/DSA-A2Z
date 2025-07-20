#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Pass By Reference with Pointers
void doSomething(int *num)
{ /*Original value comes*/

    /*These all are modification in the original value*/
    cout << *num << endl;

    *num += 5;

    cout << *num << endl;

    *num += 5;

    cout << *num << endl;
}

int main()
{
    int *p = new int(10); // Dynamically allocated memory for an integer

    doSomething(p); /*original number address goes*/

    cout << *p << endl; /*Now it print 20*/

    delete p; // Free the dynamically allocated memory

    return 0;
}