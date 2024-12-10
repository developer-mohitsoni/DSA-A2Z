//! Program to find Stock Buy and Sell
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C = O(N)

//* S.C is O(1).

int stockBuyAndSell(vector<int> &v)
{
    int n = v.size();

    int mini = v[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        int cost = v[i] - mini;

        maxProfit = max(maxProfit, cost);

        mini = min(mini, v[i]);
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