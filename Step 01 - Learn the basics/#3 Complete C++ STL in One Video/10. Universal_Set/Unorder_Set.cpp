#include<bits/stdc++.h>
using namespace std;

void explainUSet(){
    // Unordered_set ko declare karna
    unordered_set<int> uset;

    // Elements ko insert karna
    uset.insert(5);
    uset.insert(10);
    uset.insert(15);
    uset.insert(20);

    // Duplicate element insert karna - ye ignore hoga
    uset.insert(5);

    // Sabhi elements par iterate karna
    cout << "Unordered set me sabhi elements:" << endl;
    for (auto element : uset)
    {
        cout << element << " ";
    }
    cout << endl;

    // Check karna ki ek element exist karta hai ya nahi
    int element = 10;
    if (uset.find(element) != uset.end())
    {
        cout << "\nElement " << element << " exist karta hai" << endl;
    }
    else
    {
        cout << "\nElement " << element << " exist nahi karta" << endl;
    }

    // Count function ka use karke check karna
    cout << "Element 5 count: " << uset.count(5) << endl;
    cout << "Element 100 count: " << uset.count(100) << endl;

    // Unordered_set ka size
    cout << "Unordered_set ka size: " << uset.size() << endl;

    // Buckets ki number
    cout << "Buckets ki number: " << uset.bucket_count() << endl;

    // Current load factor
    cout << "Load factor: " << uset.load_factor() << endl;

    // Ek element ko hatana
    uset.erase(15);
    cout << "\n15 ko hatane ke baad:" << endl;
    for (auto element : uset)
    {
        cout << element << " ";
    }
    cout << endl;

    // Sabhi elements ko clear karna
    uset.clear();
    cout << "Clear karne ke baad size: " << uset.size() << endl;

    // lower_bound() and upper_bound() function
    // does not works, rest all functions are same as Set,
    // it does not store in any particular order, it has a
    // better complexity than set in most cases, except some
    // when collision happens

    // Most cases T.C is O(1)

    // Worst Case happens rarely in unordered_set then it's T.C is O(N)

}
int main(){
    // What is UnorderedSet in STL
    // It is an associative container that contains key value pairs.
    // The data items are stored in the form of nodes. Each node consists  
    // of a key-value pair. There is no particular order in which elements  
    // are placed into the containers, making them ideal for applications  
    // where fast access to individual elements is necessary.



    // List of the Operations perfromed in a UniversalSet (Same as all Set Operations except lower_bound() and upper_bound())

    explainUSet();

    return 0;
}