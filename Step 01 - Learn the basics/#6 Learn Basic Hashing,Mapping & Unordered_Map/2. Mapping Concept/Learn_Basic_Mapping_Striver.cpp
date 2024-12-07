#include <bits/stdc++.h>
using namespace std;

// T.C Of Map:-
// precomputation (storing) process and fetching process takes logarithmic(N) T.C in all Cases Best,Average and Worst
// where, N = number of elements in the map

//! NOTE:- Map stores all the value in Sorted Order

void printMap(map<int, int> &mp)
{
    // iterate in the map
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;
}

void fetchingProcess(map<int, int> &mp, int value)
{

    // Fetching Process

    cout << value << " appears: " << mp[value] << " times in an vector array" << endl;

    printMap(mp);
}
void precomputationProcess(vector<int> &v, int value)
{

    // Precomputation Operation
    // Default it store values {0}'s
    map<int, int> mpp;

    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;

        // Both are same

        // mpp[v[i]] += 1;
    }

    fetchingProcess(mpp, value);
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

    precomputationProcess(arr, findElement);

    return 0;
}