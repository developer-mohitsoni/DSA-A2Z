#include <iostream>
using namespace std;
#include <utility>

int main()
{
    // Creating a pair
    pair<int, string> p1(10, "Hello");

    // Accessing elements of the pair
    cout << "First: " << p1.first << ", Second: " << p1.second << endl;

    // Modifying elements of the pair
    p1.first = 20;
    p1.second = "World";

    cout << "First: " << p1.first << ", Second: " << p1.second << endl;

    return 0;
}