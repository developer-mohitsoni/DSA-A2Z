#include<bits/stdc++.h>
using namespace std;

int main(){

    // push_back() and pop_back();

    vector<int>v13;
    v13.push_back(8);
    v13.push_back(16);
    v13.push_back(24);
    v13.push_back(32);
    v13.push_back(40);

    cout<<"Perform push_back() elements:- "<<endl;

    for(auto it : v13){
        cout<<it<<" ";
    }
    // Output: 8 16 24 32 40
    cout<<endl<<endl;


    cout<<"Perform pop_back() only last element:- "<<endl;
    // {8,16,24,32,40}
    v13.pop_back(); // Output:- {8,16,24,32}

    for(auto it2 : v13){
        cout<<it2<<" ";
    }
    cout<<endl;

    return 0;
}