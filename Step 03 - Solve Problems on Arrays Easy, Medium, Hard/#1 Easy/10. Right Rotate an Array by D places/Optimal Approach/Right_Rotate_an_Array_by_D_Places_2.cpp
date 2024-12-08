//! Right rotate an array by D places

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(D) + O(n-D) + O(n) => O(2n) => O(n)
//* S.C is O(1)

void reverse(vector<int> &arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void rightRotateByD(vector<int> &v, int D)
{
    int n = v.size();

    if (D == 0 || D == n)
    {
        return;
    }

    D = D % n;

    reverse(v, 0, D);         // Reverse the first n-D elements // T.C is O(D)
    reverse(v, D + 1, n - 1); // Reverse the remaining n-D elements // T.C is O(n-D)
    reverse(v, 0, n - 1);     // Reverse the whole array // T.C is O(n)
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