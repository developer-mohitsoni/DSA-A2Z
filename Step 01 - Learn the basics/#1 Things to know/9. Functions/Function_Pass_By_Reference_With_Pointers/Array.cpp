#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// NOTE:- Pass By Value is not Possible in array,vector
// NOTE:- Only Pass By Reference is done in array,vector


// Pass By Reference with Pointers
void doubling(int *arr, int size){

    for(int i=0; i<size; i++){
        arr[i] *= 2;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int *arr = new int[n]; // Dynamically allocated memory for an array of integers

    cout<<"Enter The Elements:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Before Doubling the Digits in Each Element: "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    /*These below 3 all are same to pass as an address of arr*/
    doubling(arr, n);
    // doubling(&arr[0]);
    // doubling(arr+0);

    cout<<endl;

    cout<<"After Doubling the Digits in Each Element: "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}