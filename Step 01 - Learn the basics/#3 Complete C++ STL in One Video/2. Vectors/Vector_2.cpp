#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;

    v.push_back(2);

    // What is emplace_back in vector?

    /*
    emplace_back is a function in C++ used to construct and add elements to the end of a vector. This function is introduced in C++11 and provides an alternative approach to the push_back function.

    Instead of constructing an object and then passing it to push_back, emplace_back constructs the object in-place, directly within the vector's uninitialized memory. This can lead to performance improvements in certain situations, especially when the elements to be added are large or complex objects.

    Note: It's important to keep in mind that while emplace_back can provide performance benefits in certain situations, it's not always the best choice. For example, if you're adding elements to a vector that have already been constructed, it's generally more efficient to use push_back rather than constructing
    */
    v.emplace_back(1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}