#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Pass By Value
void doSomething(string s){ /*copy comes*/

    /*These all are modification in the copy not original string*/

    s[s.size()-2] = 'a';
    s[s.size()-1] = 'n';

    cout<<s<<endl;
}

int main(){
    string s = "Mohit";

    doSomething(s); /*copy goes, original string didn't go*/

    /*this original string must be somewhere in the memory, and memory did not go*/

    cout<<s<<endl; /*Why it shows "Mohit" ?,
                        we already modify it because this is "Pass By Value"*/

    return 0;
}