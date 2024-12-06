#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
void findElementOccur(vector<int> &v, int element)
{
    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element)
        {
            count++;
        }
    }

    cout << endl;

    cout << element << " appears: " << count << " times in an vector array";

    // T.C is  O(q*n) , where q = query
    // and S.C is O(1)

    // Next we have see how to perform "Hashing" in this code
}

int main()
{
    int n;
    cout << "Enter The Size of Vector: ";
    cin >> n;

    cout << "Enter The Number of Elements: " << endl;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {

        int data;
        cin >> data;

        arr.push_back(data);
    }

    int findElement;

    cout << "Enter the element that you want how many times it appear in vector array: " << endl;

    cin >> findElement;

    findElementOccur(arr, findElement);

    return 0;
}