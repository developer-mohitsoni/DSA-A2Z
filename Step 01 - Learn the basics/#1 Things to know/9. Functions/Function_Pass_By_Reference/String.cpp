#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Pass By Reference
void doSomething(string &s){ /*original string comes*/

    cout<<s<<endl;
    
    /*These all are modification in the original string*/

    s[s.size()-2] = 'a';
    s[s.size()-1] = 'n';

}

int main(){
    string s = "Mohit";

    doSomething(s); /*original string passes*/

    cout<<s<<endl; /*Now it prints "Mohan"*/

    return 0;
}