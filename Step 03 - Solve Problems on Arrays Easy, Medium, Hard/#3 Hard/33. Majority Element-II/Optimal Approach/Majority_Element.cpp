//! Program to find majority element which is greater than > n/3 times in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* Time Complexity: O(2n)
//* Space Complexity: O(1)

vector<int> majorityElement(vector<int> &v)
{
    int n = v.size();

    int count1 = 0, count2 = 0;

    int el1 = INT_MIN; // first element
    int el2 = INT_MIN; // second element

    for (int i = 0; i < n; i++)
    {
        if (count1 == 0 && el2 != v[i])
        {
            count1 = 1;
            el1 = v[i];
        }
        else if (count2 == 0 && el1 != v[i])
        {
            count2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1)
            count1++;
        else if (v[i] == el2)
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }

    vector<int> ls;

    count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == el1)
            count1++;
        else if (v[i] == el2)
            count2++;
    }
    int mini = (int)(n / 3) + 1;

    if (count1 >= mini)
        ls.push_back(el1);
    if (count2 >= mini)
        ls.push_back(el2);

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