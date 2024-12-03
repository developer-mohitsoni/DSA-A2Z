#include<bits/stdc++.h>
using namespace std;

void explainMap(){

    // Showing Map as:- map<key,value>mp;

    map<int,int>mpp;

    map<int,pair<int,int>>mpp;

    map<pair<int,int>,int> mpp;


    mpp[1] = 2;

    mpp.emplace({3,1}); //insert a pair of data in the map
    mpp.insert({2,4});

    mpp[{2,3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it1 = mpp.find(3);
    cout<<(it1)->second;

    auto it2 = mpp.find(5);

    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);


    // erase,swap,size,empty, are same as Set




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