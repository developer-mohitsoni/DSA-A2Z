#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    st.insert(2);
    st.emplace(7);
    st.insert(8);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    // Note that st.count() will return 1 or 0. If the value is present inside the set it will return 1 otheriwse 0

    for (int i = 1; i <= 10; i++)
    {
        cout << i;

        // Checks and compare the each element in a set occurence
        if (st.count(i) != 0)
        {
            cout << " is an element of set." << endl;
        }
        else
            cout << " is not an element of set" << endl;
    }

    return 0;
}