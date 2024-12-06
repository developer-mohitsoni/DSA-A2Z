#include<bits/stdc++.h>
using namespace std;

// Understandng Default Argument, NOTE:- always listed at the end 
void f(int arr[], int n, int i=0){
    if(i>=n/2) return;

    // Using Two Pointers with a Single Variable
    swap(arr[i], arr[n-i-1]);

    f(arr,n,i+1);
}

int main(){
    int n;
    cout<<"Enter The Number:-"<<endl;
    cin>>n;

    int arr[n];
    

    cout<<"Enter The Array Elements: "<<endl;
    for(int i=0; i<n; i++) cin>>arr[i];

    f(arr,n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}