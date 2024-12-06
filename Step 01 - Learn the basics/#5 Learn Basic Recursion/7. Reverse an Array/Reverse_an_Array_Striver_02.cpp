#include<bits/stdc++.h>
using namespace std;

void f(int arr[],int l, int r){
    if(l >= r) return;

    // Using Two Pointers with a Two Variable
    swap(arr[l],arr[r]);

    f(arr,l+1,r-1);
}


int main(){
    int n;
    cout<<"Enter The Number:-"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter The Array Elements: "<<endl;
    
    for(int i=0; i<n; i++) cin>>arr[i];

    f(arr,0,n-1);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}