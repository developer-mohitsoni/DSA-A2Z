#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// NOTE:- Pass By Value is not Possible in array
// NOTE:- Only Pass By Reference is done in array,vector

// We can only done Pass by Reference and Address in an Array

// Pass By Reference

//* New learning here to paas the array by reference
void doubling(int (&arr)[])
{

    for (int i = 0; i < 5; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[5];

    cout << "Enter The Elements:- " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Doubling the Digits in Each Element: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    doubling(arr);

    cout << endl;

    cout << "After Doubling the Digits in Each Element: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}