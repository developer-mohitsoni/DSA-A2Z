#include <bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long N)
{
    // base case
    // if(N == 0) return 0;
    if (N <= 1)
        return N;

    // recursive relation
    return (pow(N, 3) + sumOfSeries(N - 1));
}
int main()
{

    // Given an integer N.Calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till N-th term.
    long long n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Sum of First N Numbers are:- ";

    long long solve = sumOfSeries(n);

    cout << solve;

    return 0;
}