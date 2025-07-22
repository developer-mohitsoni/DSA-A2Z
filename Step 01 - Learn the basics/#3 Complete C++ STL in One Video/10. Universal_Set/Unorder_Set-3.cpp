#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasDuplicates(vector<int> &arr)
{
  unordered_set<int> seen;

  for (int num : arr)
  {
    // Agar element already set me hai, to duplicate mila
    if (seen.find(num) != seen.end())
    {
      return true;
    }

    // Element ko set me add karo
    seen.insert(num);
  }

  // Koi duplicate nahi mila
  return false;
}

int main()
{
  vector<int> arr1 = {1, 2, 3, 4, 5};
  vector<int> arr2 = {1, 2, 3, 1, 5};

  cout << "Array 1 has duplicates: " << (hasDuplicates(arr1) ? "Yes" : "No") << endl;
  cout << "Array 2 has duplicates: " << (hasDuplicates(arr2) ? "Yes" : "No") << endl;

  return 0;
}
