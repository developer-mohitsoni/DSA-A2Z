#include <bits/stdc++.h>
using namespace std;

// Use For Loop (Here we can't use Recursive Approach for Large Values of N)
vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fib;
    if (n <= 1)
    {
        return fib;
    }

    fib.push_back(0);
    fib.push_back(1);

    int a = 0, b = 1;
    for (int i = 2; i < n; i++)
    {
        int ans = a + b;
        fib.push_back(ans);
        a = b;
        b = ans;
    }
    return fib;
}
int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Fibonacci Series Upto N are:- " << endl;

    vector<int> fib = generateFibonacciNumbers(n);

    for (auto arr : fib)
        cout << arr << " ";

    return 0;
}

// NOTE:- We use For Loop because the recursive function calls itself multiple times, resulting in redundant calculations. To optimize the code and avoid TLE (Time Limit Exceeded) errors, you can use memoization or an iterative approach to calculate Fibonacci numbers.