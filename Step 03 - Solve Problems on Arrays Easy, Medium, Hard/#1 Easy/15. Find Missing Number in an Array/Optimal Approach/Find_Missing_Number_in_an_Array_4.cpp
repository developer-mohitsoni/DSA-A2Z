//! Program to find the missing number in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(n).

//* S.C is O(1).

int MissingNumber(vector<int> &v)
{
    int n = v.size();

    int XOR1 = 0;

    int XOR2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // XOR2 me array ke elements ka XOR hota hai.
        XOR2 = XOR2 ^ v[i];
        // XOR1 me 1 se n tak ke saare numbers ka XOR hota hai.
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ n;

    // Yeh code XOR ka use karke smartly missing number find karta hai. XOR ka property hai ki same numbers cancel ho jate hain.
    return (XOR1 ^ XOR2);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array in range 1 to n: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missingNumber = MissingNumber(arr);

    cout << "\nThe missing number in the array is: " << missingNumber << endl;

    return 0;
}