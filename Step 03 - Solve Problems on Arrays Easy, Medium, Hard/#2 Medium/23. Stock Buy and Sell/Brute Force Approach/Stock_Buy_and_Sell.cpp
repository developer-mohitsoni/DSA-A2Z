//! Program to find Stock Buy and Sell
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N^2)

//* S.C is O(1).

int stockBuyAndSell(vector<int> &v)
{
    int n = v.size();

    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                maxProfit = max(v[j] - v[i], maxProfit);
            }
        }
    }
    return maxProfit;
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

    int ans = stockBuyAndSell(arr);

    cout << "\nThe Profit is: " << ans << endl;

    return 0;
}