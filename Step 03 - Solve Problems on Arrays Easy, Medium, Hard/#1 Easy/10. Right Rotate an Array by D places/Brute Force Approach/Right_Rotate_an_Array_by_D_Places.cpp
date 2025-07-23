//! Right rotate an array by D places

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n-d) + O(d) + O(d) => O(n+d)
//* S.C is O(d) because takes extra space

void rightRotateByD(vector<int> &v, int D)
{
    int n = v.size();

    if (D == 0 || D == n)
    {
        return;
    }

    D = D % n;

    vector<int> temp; // Create a temporary array to store the first D elements of the original array

    // Iterate through D to n-1 elements of the original array
    for (int i = n - 1; i >= n - D; i--) // T.C is O(n-d)
    {
        // Push each element into the temporary array
        temp.push_back(v[i]);
    }

    // Iterate through the remaining elements of the original array

    for (int i = n - 1; i >= D - 1; i--) // T.C is O(d)
    {
        // Shift each element to the right by D places
        v[i] = v[i - D];
    }

    // Iterate through the first D elements of the original array
    for (int i = 0; i < D; i++) // T.C is O(d)
    {
        v[i] = temp[temp.size() - 1 - i]; // Assign each element from the temporary array to the corresponding position in the original array
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
    cout << "Number of elements to be right rotated: ";
    cin >> k;

    rightRotateByD(arr, k);

    cout << endl;

    cout << "Array After Right Rotating By D Place: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}