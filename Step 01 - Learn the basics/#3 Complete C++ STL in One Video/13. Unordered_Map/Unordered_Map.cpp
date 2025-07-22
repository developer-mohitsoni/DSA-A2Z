#include <bits/stdc++.h>
using namespace std;

void explainUnorderedMap()
{
    // Declare an unordered_map
    unordered_map<string, int> umap;

    // Insert elements (key-value pairs)
    umap["apple"] = 100;
    umap["banana"] = 200;
    umap["cherry"] = 300;

    // Another way to insert
    umap.insert(make_pair("date", 400));

    // Access elements using key
    cout << "Value of apple: " << umap["apple"] << endl;
    cout << "Value of date: " << umap.at("date") << endl;

    // Iterate through all elements
    cout << "\nAll elements in unordered_map:" << endl;
    for (auto &pair : umap)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Check if a key exists
    string key = "banana";
    if (umap.find(key) != umap.end())
    {
        cout << "\nKey '" << key << "' exists with value: " << umap[key] << endl;
    }
    else
    {
        cout << "\nKey '" << key << "' does not exist" << endl;
    }

    // Size of unordered_map
    cout << "Size of unordered_map: " << umap.size() << endl;

    // Number of buckets
    cout << "Number of buckets: " << umap.bucket_count() << endl;

    // Current load factor
    cout << "Load factor: " << umap.load_factor() << endl;

    // Erase a key
    umap.erase("apple");
    cout << "\nAfter erasing 'apple', size: " << umap.size() << endl;

    // same as set and unordered_set difference.
    // having unique keys but it will not be sorted.

    // Worst Case:- T.C is O(N) occurs rarely
    // Best Case:- T.C is O(1)
}
int main()
{
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