#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &ans, int x)
{
    // base case
    if (x == 0)
        return;

    // 1 case solve own
    ans.push_back(x);

    // rest case will handle recursion
    display(ans, x - 1);
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