#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,}
    ms.insert(1); // {1,1,1}



    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1+2));
    
    // rest all function are same as set
}
int main(){
    // What is MultiSet in STL

    // MultiSet is same as Set but it can contains duplicate elements also.

    // A container that stores unique elements following a specific order (default ascending) but allows for duplicates.

    // A container that contains sorted elements and allows you to store multiple copies of an element. It maintains the sorted order of its elements.

    // List of the Operations perfromed in a MultiSet (Same as all Set Operations)


    explainMultiSet();

    return 0;
}