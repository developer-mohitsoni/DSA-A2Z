// This code snippet calculates and prints all the factorial numbers that are less than or equal to a given number 'n'.
#include <bits/stdc++.h>
using namespace std;

// Default Argument Listed Here
void fact(long long n, vector<long long> &ans, long long facto = 1, int i = 1)
{
    facto *= i;

    if (facto > n)
        return;

    ans.push_back(facto);

    fact(n, ans, facto, ++i);
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> ans;

    fact(n, ans);

    return ans;
}
int main()
{
    long long n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Factorial Number Not Greater Than N are:- ";

    vector<long long> arr = factorialNumbers(n);

    for (auto arr : arr)
        cout << arr << " ";

    return 0;
}