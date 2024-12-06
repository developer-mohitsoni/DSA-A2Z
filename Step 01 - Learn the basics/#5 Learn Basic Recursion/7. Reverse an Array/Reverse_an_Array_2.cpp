#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Solve using iterator in a single loop
    for (auto first = nums.begin(),last=(nums.end()-1); first<=last; first++,last--){
        swap(*first, *last);
    }
    return nums;
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