//! Left rotate an array by D places

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(d) + O(n-d) + O(d) => O(n+d)
//* S.C is O(d) because takes extra space

void leftRotateByD(vector<int> &v, int D)
{
    int n = v.size();

    if (D == 0 || D == n)
    {
        return;
    }

    D = D % n;

    vector<int> temp; // Create a temporary array to store the first D elements of the original array

    // Iterate through the first D elements of the original array
    for (int i = 0; i < D; i++) // T.C is O(d)
    {
        // Push each element into the temporary array
        temp.push_back(v[i]);
    }

    // Iterate through the remaining elements of the original array
    for (int i = 0; i <= n - D - 1; i++) // T.C is O(n-d)
    {
        // Assign each element from the original array to the corresponding position in the original array
        v[i] = v[i + D]; // Shift the elements to the left by D places
    }

    // Iterate through the last D elements of the original array
    for (size_t i = 0; i < temp.size(); i++) // T.C is O(temp.size()) which is O(d)
    {
        // Assign each element from the temporary array to the corresponding position in the original array
        v[n - D + i] = temp[i];
    }
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

    int k;
    cout << "Number of elements to be left rotated: ";
    cin >> k;

    leftRotateByD(arr, k);

    cout << endl;

    cout << "Array After Left Rotating By D Place: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}