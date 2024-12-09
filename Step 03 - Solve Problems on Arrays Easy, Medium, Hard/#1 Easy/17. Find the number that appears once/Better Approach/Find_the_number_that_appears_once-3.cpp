//! Problem to find the number that appears once, and the other numbers appears twice

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(nlogm) + O(n/2+1)

//* S.C is O(n/2+1).

int appearsOnce(vector<int> &v)
{
    int n = v.size();

    int appearsOnce;

    map<long long, int> mp;

    for (int i = 0; i < n; i++) // T.C is O(nlogm)
    {
        mp[v[i]]++;
    }

    for (auto it : mp)
    { // T.C is O(n/2+1)
        if (it.second == 1)
            appearsOnce = it.first;
    }
    return appearsOnce;
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