#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    reverse(n.begin(), n.end()); // Reverse the string

    cout << "Reversed Number is:- " << n << endl;

    return 0;
}
