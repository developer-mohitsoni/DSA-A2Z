#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Pass By Reference
void doSomething(float &num){ /*Original value comes*/

    /*These all are modification in the original value*/
    cout<<num<<endl;

    num += 5.2;

    cout<<num<<endl;

    num += 7.15;

    cout<<num<<endl;
}

int main(){
    float num = 10.50;

    doSomething(num); /*original number goes*/

    cout<<num<<endl; /*Now it print 22.85*/

    return 0;
}