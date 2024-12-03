#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Some in-build functions:

int main(){
    int num1, num2;
    cout<<"Enter First No. "<<endl;
    cin>>num1;

    cout<<"Enter Second No. "<<endl;
    cin>>num2;

    // Find Minimum using in-built function

    int mini = min(num1,num2);
    cout<<"Minimum of "<<num1<<" and "<<num2<<" is: "<<mini<<endl;

    // Find Maximum using in-built function

    int maxi = max(num1,num2);
    cout<<"Maximum of "<<num1<<" and "<<num2<<" is: "<<maxi;

    return 0;
}