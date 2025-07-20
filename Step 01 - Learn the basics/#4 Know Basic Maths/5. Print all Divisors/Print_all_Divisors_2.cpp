// Optimized Approach in O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cout << "Enter The Number:- " << endl;
  cin >> n;

  cout << "All Divisors of " << n << " are:-" << endl;

  vector<int> ans;

  // O(sqrt(n))

  // Suppose n = 565876
  // Then we will check from 1 to sqrt(n)

  // Why sqrt(n)
  // Because if n is divisible by i, then n / i is also a divisor of n
  // For example, if n = 565876, then 1 is a divisor and n / 1 = 565876 is also a divisor
  // Similarly, if n = 565876, then 2 is a divisor and n / 2 = 282938 is also a divisor
  // So we only need to check up to sqrt(n) because if i is greater than sqrt(n), then n / i will be less than sqrt(n)
  
  // This means we can find all divisors by checking only up to sqrt(n)
  // If n % i == 0, then i is a divisor of n
  // For example, if n = 565876, then 1 2 4 193 386 733 772 1466 2932 141469 282938 565876
  // We will print all such divisors
  // We will loop from 1 to sqrt(n) and check if n % i == 0
  // If it is true, we will add i to the answer vector
  // and also add n / i to the answer vector if it is not equal to i
  // This is because if n is divisible by i, then n / i is also a divisor of n
  // For example, if n = 565876, then 1 is a divisor and n / 1 = 565876 is also a divisor
  // Similarly, if n = 565876, then 2 is a divisor and n / 2 = 282938 is also a divisor
  // We will add both i and n / i to the answer vector 

  // for(int i=1; i*i<=n; i++){
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      ans.push_back(i);

      if ((n / i) != i)
        ans.push_back(n / i);
    }
  }

  // O(n*log(n)) : where n is the number of factors
  sort(ans.begin(), ans.end());

  // O(n)
  for (auto it : ans)
    cout << it << " ";

  // Therefore: Total T.C is O(sqrt(n)) + O(n*log(n)) + O(n)

  return 0;
}