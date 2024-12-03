#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// return-> which return some value

// Take two numbers and print it's sum

int sum(int a, int b){
    return (a+b);
}
int main(){
    int num1, num2;
    cout<<"Enter First No. "<<endl;
    cin>>num1;

    cout<<"Enter Second No. "<<endl;
    cin>>num2;

    // Addition using function
    int num3 = sum(num1,num2);

    cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num3;

    return 0;
}