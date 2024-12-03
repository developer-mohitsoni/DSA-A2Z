#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// void-> which doesn't return anything
// return
// parameterised
// non parameterised

void printAnotherName(string name){ /*Function Defination*/
    cout<<"Hello "<<name<<"!"<<endl;
}

void printName(){ /*Function Defination*/
    cout<<"Hello Mohit!"<<endl;
}
int main(){
    printName(); /*Function Calling*/

    string name;
    cout<<"Enter another name: "<<endl;
    getline(cin,name);/*getline is used when we want to take input till \n comes in the stream*/

    printAnotherName(name); /*Function Calling*/

    string name2;
    cout<<"Enter one another name: "<<endl;
    getline(cin,name2);

    printAnotherName(name2); /*Function Calling*/

    return 0;
}