#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> ls;

    ls.push_back(2);
    ls.push_back(2);
    ls.push_back(1);
    ls.push_back(4);
    ls.push_back(3);
    ls.push_back(3);
    ls.push_back(3);
    ls.push_back(5);
    ls.push_back(5);

    cout << ls.size() << endl;

    ls.sort();

    cout << "List before Sorted Reverse: ";
    for (auto i : ls)
    {
        cout << i << " ";
    }

    cout << endl
         << endl;

    // to print only unique element
    ls.unique();

    cout << ls.size() << endl;

    cout << "List after remove duplicate consecutive elements: ";

    for (auto j : ls)
    {
        cout << j << " ";
    }

    return 0;
}