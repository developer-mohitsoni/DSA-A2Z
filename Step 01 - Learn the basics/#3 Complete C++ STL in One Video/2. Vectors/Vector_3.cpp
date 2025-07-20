#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); /*0th index */ /*push_back, need curly braces {} to shows as an pair*/

    vec.emplace_back(3, 4); /*1st index*/ /*emplace_back, automatically assume as a pair no need of curly braces {}*/

    cout << vec.size() << endl; /*gives the size of the vector*/

    // What is this size_t
    // size_t is an unsigned integer type used for representing the size of objects in bytes.
    // It is commonly used for array indexing and loop counters.
    // Hindi mai smajo kiss liye use hota hai
    // size_t ka use isliye hota hai kyunki ye negative nahi hota, aur ye hamesha positive ya zero hi hota hai.
    // Isliye jab hum array ki length ya size ko represent karte hain, to size_t ka use karte hain.

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << " ";
    }

    return 0;
}