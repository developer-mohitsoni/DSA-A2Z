#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Pass By Reference
void doSomething(char &ch){ /*Original value comes*/

    /*These all are modification in the original value*/
    cout<<ch<<endl;

    ch += 5;

    cout<<ch<<endl;

    ch += 5;

    cout<<ch<<endl;
}

int main(){
    char ch = 'a';

    doSomething(ch); /*original number goes*/

    cout<<ch<<endl; /*Now it print 'k'*/
    return 0;
}