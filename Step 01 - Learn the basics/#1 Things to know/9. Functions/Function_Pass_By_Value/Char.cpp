#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Pass By Value
void doSomething(char ch)
{ /*copy comes*/

    /*These all are modification in the copy not original character*/
    cout << ch << endl;

    ch += 5;

    cout << ch << endl;

    ch += 5;

    cout << ch << endl;
}

int main()
{
    char ch = 'a';

    doSomething(ch); /*copy goes, original charcter didn't go*/

    /*this original character must be somewhere in the memory, and memory did not go*/

    cout << ch << endl; /*Why it shows a ?,
                            we already modify it, because this is "Pass By Value"*/

    return 0;
}