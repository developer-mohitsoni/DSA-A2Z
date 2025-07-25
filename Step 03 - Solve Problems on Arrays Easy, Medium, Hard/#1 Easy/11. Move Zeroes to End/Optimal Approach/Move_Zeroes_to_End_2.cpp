//! Move zeroes to end

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(x) + O(n-x) = O(n)
//* S.C is O(1) because no extra space takes

//! Two Pointer Approach
void moveZeroesToEnd(vector<int> &v)
{
    // T.C:- O(x)
    int n = v.size();
    
    int j = -1; // Pointer to track the last non-zero element

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            j = i; // Update j to the current index of zero
            break; // Break the loop as we found a zero
        }
    }

    // T.C:- O(n-x)
    for(int i=j+1; i<n; i++)
    {
        if(v[i] != 0)
        {
            swap(v[i], v[j]); // Swap the current non-zero element with the last zero found
            j++; // Move j to the next position
        }
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

    moveZeroesToEnd(arr);

    cout << endl;

    cout << "Array After Moving Zeroes to End: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}