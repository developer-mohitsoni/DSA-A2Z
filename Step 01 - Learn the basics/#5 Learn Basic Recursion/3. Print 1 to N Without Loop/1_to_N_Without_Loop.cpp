#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &ans, int x)
{
    // base case
    if (x == 0)
        return;

    // rest case will handle recursion
    display(ans, x - 1);

    // 1 case solve own (Backtracking)
    ans.push_back(x);
}
vector<int> printNos(int x)
{
    // Write Your Code Here
    vector<int> ans;
    display(ans, x);
    return ans;
}
int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    vector<int> solve = printNos(n);

    for (auto it : solve)
        cout << it << " ";
}