#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    // Yeh check ensure karta hai ki array truly wrap-around hai ya nahi.

    // Agar yeh comparison na karein, to kuch edge cases miss ho sakte hain, aur code galat results de sakta hai.
    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input be like:- [3, 4, 5, 1, 2]
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = check(arr);

    if (ans)
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;
}