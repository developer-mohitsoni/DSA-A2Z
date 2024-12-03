#include <bits/stdc++.h>

using namespace std;
/*
Take the age from the user and then decide accordingly:
1. If age < 18,
    print-> "not eligible for job.""

2. If age >= 18,
    print-> "eligible for job."

3. If age >= 55 and age <= 57,
    print-> "eligible for job, but retirement soon."

4. If age > 57
    print-> "retirement time."
*/

int main()
{

    int age;
    cin >> age;

    // We can also done as without using logic && as the previous condition is check first that's why we done this...
    if (age < 18)
    {
        cout << "not eligible for job.";
    }
    // We surely know here we reach is >=18

    // Here Nested else if statement is done...
    else if (age <= 57)
    {
        cout << "eligible for job.";

        if (age >= 55)
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "retirement time";
    }

    return 0;
}