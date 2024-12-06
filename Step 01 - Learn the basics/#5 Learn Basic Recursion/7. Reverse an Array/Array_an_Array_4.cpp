#include<bits/stdc++.h>
using namespace std;

// Solve using Recursion
void reverseArray(vector<int>&arr,int i){
    int n = arr.size();

    if(i>=n/2) return;

    // 1 case solve own
    swap(arr[i], arr[n-i-1]);

    // Rest case solve using Recursion
    reverseArray(arr, i+1);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int>reversed(nums);

    reverseArray(reversed, 0);

    return reversed;
}
int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    vector<int>arr;

    int data;
    cout<<"Enter The Elements:-"<<endl;

    for(int i=0; i<n; i++){
        cin>>data;
        arr.push_back(data);
    }
    cout<<endl;

    vector<int>ans = reverseArray(n,arr);

    cout<<"Array After Reverse"<<endl;

    for(auto it : ans) cout<<it<<" ";

    return 0;
}