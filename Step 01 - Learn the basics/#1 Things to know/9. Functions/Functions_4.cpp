#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Some in-build functions:

int main(){
    int num1, num2, num3;
    cout<<"Enter First No. "<<endl;
    cin>>num1;

    cout<<"Enter Second No. "<<endl;
    cin>>num2;

    cout<<"Enter Third No. "<<endl;
    cin>>num3;

    // Find Minimum b/w 3 values using in-built function

    int mini = min(num1,min(num2,num3));
    cout<<"Minimum of "<<num1<<","<<num2<<" and "<<num3<<" is: "<<mini<<endl;

    // Find Maximum b/w 3 values using in-built function

    int maxi = max(num1,max(num2,num3));
    cout<<"Maximum of "<<num1<<","<<num2<<" and "<<num3<<" is: "<<maxi<<endl;

    return 0;
}