#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    // pair<int,int>p{1,3};
    // pair<int,int>p(1,3);

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].first << endl;
    cout << arr[1].second << endl;

    // How to access nested pairs in easy way?
    for (auto &i : arr)
    {
        cout << i.first << " " << i.second << endl;
    }

    pair<int, pair<int, int>> arr2[] = {{1, {1, 2}}, {2, {3, 4}}};

    cout << arr2[0].first << endl;
    cout << arr2[0].second.first << endl;
    cout << arr2[0].second.second << endl;

    // Pair of array?

    // How to access nested pairs in easy way?
}
int main()
{
    // What is pairs in STL?
    // The pair is a container in STL C++ used to store a pair of values of any data type.

    // Here's a brief description of the pair class in STL:

    /*
    * It is a part of the utility library and has the following template form: 'pair<class T1, class T2>'.

    * The first and the second elements of the pair are accessed using the 'first' and 'second' members respectively.

    * Pairs can be created and manipulated in a number of ways, including using the 'make_pair' function, the 'tie' function, and by using the constructor.
    */
    explainPair();

    return 0;
}