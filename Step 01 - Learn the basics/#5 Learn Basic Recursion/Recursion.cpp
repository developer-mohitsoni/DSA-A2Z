#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print()
{
    // base condition
    if (cnt == 3)
        return;

    // 1 case solve by own
    cout << cnt << endl;

    cnt++;

    // Rest case solve using Recursion
    print();
}

int main()
{
    print();

    return 0;
}