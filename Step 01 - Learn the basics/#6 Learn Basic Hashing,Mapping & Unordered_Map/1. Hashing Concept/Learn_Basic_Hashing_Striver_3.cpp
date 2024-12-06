#include <bits/stdc++.h>
using namespace std;

//! NOTE:- You cannot declare "hash array" upto 10^10 size. You can take upto 10^6 size "hash array" inside main function and similarly for boolean array upto 10^7 size.

//! But it can be declared globally as "int arr[1e7]" and similarly boolean can be declared as upto "boolean arr[1e8]"

// Automatically assign value 0 when array declared as globally
int hashh[10000000];

void fetchingProcess(int hashh[], int element)
{

    // Fetching Process

    cout << element << " appears: " << hashh[element] << " times in an vector array";
}
void precomputationProcess(vector<int> &v, int element)
{

    // Precomputation Operation

    for (int i = 0; i < v.size(); i++)
    {
        hashh[v[i]] += 1;
    }

    fetchingProcess(hashh, element);
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
    // No need to find maximum value because we globally declared array upto 1e7.

    int findElement;

    cout << "Enter the element that you want how many times it appear in vector array: " << endl;

    cin >> findElement;

    // hashh[1000000] (inside main only)

    precomputationProcess(arr, findElement);

    return 0;
}