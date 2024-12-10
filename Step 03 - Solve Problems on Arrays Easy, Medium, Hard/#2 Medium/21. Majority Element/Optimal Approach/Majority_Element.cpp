//! Program to find majority element in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C  = O(N) , The array is traversed twice: once to find the candidate and once to verify the candidate.
//* S.C = O(1)

//! Moore's Voting Algorithm

int majorityElement(vector<int> &v)
{
    // Phase 1 (Find candidate):
    int count = 0;

    int elem;

    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0)
        {
            count = 1;

            elem = v[i];
        }
        else if (v[i] == elem)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Phase 2 (Verify candidate):
    int count1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == elem)
        {
            count1++;
        }
    }
    if (count1 > (v.size() > 2))
    {
        return elem;
    }
    return -1;
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

    int majorityElem = majorityElement(arr);

    cout << "Majority Element in an Array is: " << majorityElem << endl;

    return 0;
}