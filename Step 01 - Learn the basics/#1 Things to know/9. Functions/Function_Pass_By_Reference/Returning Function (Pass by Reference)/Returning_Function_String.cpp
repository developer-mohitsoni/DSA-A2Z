#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Returning Function Pass By Reference (Returning String)

/*
The error in the code is that the doSomething() function returns a copy of the num parameter, not the original value of num. This is because the num parameter is passed to the function by value.

To fix this error, the doSomething() function should return a reference to the num parameter, instead of a copy of the parameter. This can be done by declaring the num parameter as a reference in the function declaration.
*/
string &doSomething(string &str)
{ /*Reference comes not the address*/

    /*These all are modification in the original string*/

    string &newString = str; /*To modify the string creating another reference variable...*/

    newString += " Codrr";

    // return str;
    // Both line are same now:
    return newString;
}

int main()
{
    string str;

    getline(cin, str); // To take input with spaces

    doSomething(str) = "jabeli"; /* original string address goes*/

    cout << str << endl; /*Print Depend on the Input value*/

    return 0;
}