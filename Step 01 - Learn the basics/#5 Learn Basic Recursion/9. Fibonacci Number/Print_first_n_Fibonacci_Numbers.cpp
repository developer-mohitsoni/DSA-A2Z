#include <bits/stdc++.h>
using namespace std;

// Use For Loop (Here we can't use Recursive Approach for Large Values of N)
vector<long long> printFibb(int n)
{
    // code here (Solved in Dynamic Programming)
    vector<long long> fib(n);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}
int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Fibonacci Series Upto N are:- " << endl;

    vector<long long> fib = printFibb(n);

    for (auto arr : fib)
        cout << arr << " ";

    return 0;
}

// NOTE:- We use For Loop because the recursive function calls itself multiple times, resulting in redundant calculations. To optimize the code and avoid TLE (Time Limit Exceeded) errors, you can use memoization or an iterative approach to calculate Fibonacci numbers.