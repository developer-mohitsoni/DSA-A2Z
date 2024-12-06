#include<bits/stdc++.h>
using namespace std;

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Using Two Pointer Approach
//     auto low = nums.begin();
//     auto high = nums.end()-1;

//     while(low <= high){
//         swap(*low,*high);

//         low++;
//         high--;
//     }
//     return nums;
// }

// Another Best Ways
vector<int> reverseArray(int n, vector<int> &nums, int i=0){
    if(i>=n/2) return nums;

    // Using Two Pointers with a Single Variable
    swap(nums[i], nums[n-i-1]);

    return reverseArray(n,nums,i+1);
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