#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{

    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    cout << q.back() << endl; // print 4

    q.back() += 5;

    cout << q.back() << endl; // print 4+5 => 9

    // Now, q is {1,2,9}
    cout << q.front() << endl; // print 1

    q.pop(); // {2,9}

    cout << q.front() << endl; // print 2

    while (!q.empty())
    {
        cout << q.front() << " ";

        q.pop();
    }

    // Size, swap, empty same as stack
}
int main()
{
    explainQueue();

    return 0;
}