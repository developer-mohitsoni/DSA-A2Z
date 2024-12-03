#include<bits/stdc++.h>
using namespace std;

void explainUnorderedMap(){

    // same as set and unordered_set difference.
    // having unique keys but it will not be sorted.


    // Worst Case:- T.C is O(N) occurs rarely
    // Best Case:- T.C is O(1)



}
int main(){
    // What is Unordered-Map in STL
    /*
    In C++, the unordered_map (also known as hash_map) is a container that stores elements formed by pairs of unique keys and values.  
        It is a container that stores elements formed by pair(Key, Data).  
        The data is stored based on the hash of key value and this hash is used to 
        find out the index where the element will be placed.
        
        Key: A unique identifier for each element present inside the Map Container.
            Keys are not sorted while storing them into the unordered_map. They just need to have an equal or unequal relationship with other keys.
            Keys are not sorted while storing them into the unordered_map.
            
        Value / Data : Corresponding to Each Key, there can be many values.
                    So when we say "mymap["Hello"] = World", then "World" is assigned to the key "Hello".
                    Now if I do mymap["Hello"] again, it will return "World".
     */


    explainUnorderedMap();

    return 0;
}