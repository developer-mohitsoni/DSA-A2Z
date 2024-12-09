//! Problem to find the number that appears once, and the other numbers appears twice

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2).

//* S.C is O(1).

int appearsOnce(vector<int> &v)
{
    int n = v.size();

    int numberAppearOnce;

    for (int i = 0; i < n; i++)
    {
        int num = v[i];
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == num)
            {
                count++;
            }
        }

        if (count == 1)
        {
            numberAppearOnce = num;
            break;
        }
    }
    return numberAppearOnce;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int numberAppearOnce = appearsOnce(arr);

    cout << "\nThe number that appears once in the array is: " << numberAppearOnce << endl;

    return 0;
}