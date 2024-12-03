#include<bits/stdc++.h>

using namespace std;

int main(){
    // 1D Array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    // NOTE:- IF you want to access nth element then you have to write arr[n-1];

    // Accessing 4th element (n-1) => (4-1) => 3:
    cout<<arr[3]<<endl;

    // Changing the value in arr[3]:
    arr[3] += 10;

    cout<<arr[3]<<endl;


    // Assigning all elemnts in array with 0's

    int arr2[5] = {0};

    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}