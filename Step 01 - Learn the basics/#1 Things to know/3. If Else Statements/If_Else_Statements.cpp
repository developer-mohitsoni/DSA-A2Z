#include <bits/stdc++.h>

using namespace std;
// Write a program that takes an input of age
// and prints if you are adult or not
// >= 18, yes
// < 18, no
int main()
{

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult!";
    }
    else
    {
        cout << "You are not an adult!";
    }
    return 0;
}