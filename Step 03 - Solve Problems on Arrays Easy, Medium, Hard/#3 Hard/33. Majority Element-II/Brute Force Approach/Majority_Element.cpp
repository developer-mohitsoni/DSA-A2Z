//! Program to find majority element which is greater than > n/3 times in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Approach)------------------------------

//* Time Complexity: O(n^2)
//* Space Complexity: O(1)

vector<int> majorityElement(vector<int> &v)
{
    int n = v.size();

    vector<int> ls;

    for (int i = 0; i < n; i++)
    {
        if (ls.size() == 0 || ls[0] != v[i])
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (v[i] == v[j])
                    count++;
            }
            if (count > n / 3)
                ls.push_back(v[i]);
        }

        if (ls.size() == 2)
            break;
    }
    return ls;
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

    vector<int> ans = majorityElement(arr);

    cout << "Majority Element in an Array are: ";

    for (auto it : ans)
        cout << it << " ";
    cout << "\n";

    return 0;
}