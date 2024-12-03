#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Returning Function Pass By Reference with Pointers (Returning Character)

/*
The error in the code is that the doSomething() function returns a copy of the num parameter, not the original value of num. This is because the num parameter is passed to the function by value.

To fix this error, the doSomething() function should return a reference to the num parameter, instead of a copy of the parameter. This can be done by declaring the num parameter as a reference in the function declaration.
*/
char *doSomething(char *ch){ /*Reference comes*/

    /*These all are modification in the original character*/

    if(*ch < 'm' && *ch < 'M'){
        *ch += 5;
        return ch; /*No need of &*/
    }

    return ch; /*No need of &*/
}

int main(){
    char ch;

    cin>>ch;

    char *store = doSomething(&ch); /* original character address goes*/

    cout<<*store<<endl; /*Print Depend on the Input value*/
    
    return 0;
}