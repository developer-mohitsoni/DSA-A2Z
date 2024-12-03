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