#include <bits/stdc++.h>
using namespace std;

// Use Recursion For Small Values of N
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

// T.C is: near about (2^n) i.e Exponential Nature
int main()
{
    int n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Fibonacci Number of N are:- " << endl;

    cout << fib(n);

    return 0;
}

// NOTE:- We use For Loop because the recursive function calls itself multiple times, resulting in redundant calculations. To optimize the code and avoid TLE (Time Limit Exceeded) errors, you can use memoization or an iterative approach to calculate Fibonacci numbers.