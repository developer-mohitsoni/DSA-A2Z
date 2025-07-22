#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    // Declare a map
    map<int, int> mpp;
    
    // Insert elements (key-value pairs)
    mpp[1] = 100;      // key: 1, value: 100
    mpp[2] = 200;      // key: 2, value: 200
    mpp[5] = 500;      // key: 5, value: 500
    
    // Another way to insert
    mpp.insert({3, 300});  // key: 3, value: 300
    
    // Access elements
    cout << "Value at key 2: " << mpp[2] << endl;
    
    // Iterate through the map
    cout << "All key-value pairs:" << endl;
    for(auto &pair : mpp) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    
    // Check if a key exists
    if(mpp.find(5) != mpp.end()) {
        cout << "Key 5 exists" << endl;
    }
    
    // Size of map
    cout << "Size of map: " << mpp.size() << endl;
    
    // Erase a key
    mpp.erase(2);
}
int main(){
    // What is Map in STL
    // Map stores unique key in sorted order as in key,value pair.
    // A map is a container that stores elements formed by pairing a key value. 
    // It is used to store data in the form of "key-value" pairs where each element has a unique key and associated with a value.
    // The data items are stored in the form of pairs where each element has a unique key and associated value. 
    // It is used to store the data in an organized manner where each element has a unique key and associated with a value.


    // List of the Operations perfromed in a Map (Same as Set)


    explainMap();

    return 0;
}