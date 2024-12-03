#include<bits/stdc++.h>

using namespace std;

int main(){
    // For Loop

    /*Printing 10*times "Mohit":*/
    for(int i=1; i<=10; i++){
        cout<<"Mohit"<<endl;
    }

    cout<<endl;
    // Step 1:- Initialization
    // Step 2:- Condition Checking
    // Step 3:- Printing
    // Step 4:- Increment / Decrement


    /*Another Example to show the value of i after printing all outputs:-*/
    int i;

    for(i=1; i<=5; i++){
        cout<<"Hello"<<endl;
    }

    // Because it will already increment it's value before checking the last condition...
    cout<<"Value after terminate the loop: "<<i<<endl; /*Output:- 6*/

    cout<<endl;


    /*For Loop traversal:*/
    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }

    cout<<endl;

    /*For Loop traversal in reverse order:*/
    for(int i=5; i>0; i--){
        cout<<i<<" ";
    }

    cout<<endl;


    /*Printing the Even Numbers from 2 to 10*/
    for(int i=2; i<=10; i+=2){
        cout<<i<<" ";
    }
    // for(int i=0; i<=10; i++){
    //     if(i % 2 == 0){
    //         cout<<i<<" ";
    //     }
    // }

    cout<<endl;


    /*Printing the Odd Numbers from 1 to 10*/
    for(int i=1; i<=10; i+=2){
        cout<<i<<" ";
    }
    // for(int i=1; i<=10; i+=1){
    //     if(i%2 != 0)
    //         cout<<i<<" ";
    // }

    cout<<endl;

    return 0;
}