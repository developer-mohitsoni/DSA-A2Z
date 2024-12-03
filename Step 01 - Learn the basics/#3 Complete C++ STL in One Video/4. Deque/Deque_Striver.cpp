#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl << endl;

    deque<int> dq2;
    dq2.push_back(5);      // {5}
    dq2.emplace_back(10);  // {5,10}
    dq2.push_front(20);    //{20,5,10}
    dq2.emplace_front(15); // {15,20,5,10}

    dq2.pop_back();  // {15,20,5}
    dq2.pop_front(); // {20,5}

    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << " ";
    }
}
int main()
{
    explainDeque();

    return 0;
}