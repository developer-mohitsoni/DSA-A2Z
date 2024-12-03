#include<bits/stdc++.h>

using namespace std;

int main(){
    // While Loop

    /*Printing 10*times "Mohit":*/
    int i=1;
    while(i<=10){
        cout<<"Mohit"<<endl;

        i++;
    }

    cout<<endl;
    // Step 1:- Initialization mandatory before while loop:
    // Step 2:- Condition Checking
    // Step 3:- Printig
    // Step 4:- Increment / Decrement


    /*Another Example to show the value of i after printing all outputs:-*/

    int j=1;
    while(j<=5){
        cout<<"Hello"<<endl;

        j++;
    }
    // Because it will already increment it's value before checking the last condition...
    cout<<"Value after terminate the loop: "<<j<<endl; /*Output:- 6*/


    cout<<endl;
    /*While Loop traversal:*/
    int k=1;

    while(k<=5){
        cout<<k<<" ";

        k++;
    }

    cout<<endl;


    /*While Loop traversal in reverse order:*/
    int l=5;

    while(l != 0){
        cout<<l<<" ";

        l--;
    }

    cout<<endl;


    /*Printing the Even Numbers from 2 to 10*/
    int m=2;

    while(m<=10){
        cout<<m<<" ";

        m += 2;
    }

    // int i=0;

    // while(i<=10){
    //     if(i % 2 == 0)
    //         cout<<i<<" ";

    //     i++;
    // }

    cout<<endl;


    /*Printing the Odd Numbers from 1 to 10*/

    int n = 1;

    while(n <= 10){
        cout<<n<<" ";

        n += 2;
    }
    // int j=1;

    // while(j<=10){
    //     if(j%2 != 0){
    //         cout<<j<<" ";
    //     }
    //     j++;

    // }

    cout<<endl;

    return 0;
}