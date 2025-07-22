#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int> &arr1, vector<int> &arr2)
{
  unordered_set<int> set1(arr1.begin(), arr1.end());
  vector<int> result;

  // Second array ke elements ko check karo ki kya wo set1 me hain
  for (int num : arr2)
  {
    if (set1.find(num) != set1.end())
    {
      result.push_back(num);
      // Element ko set1 se hata do taki duplicates result me na aaye
      set1.erase(num);
    }
  }

  return result;
}

int main()
{
  vector<int> arr1 = {1, 2, 2, 3, 4, 5};
  vector<int> arr2 = {2, 3, 3, 6, 7};

  vector<int> intersection = findIntersection(arr1, arr2);

  cout << "Array 1: ";
  for (int num : arr1)
  {
    cout << num << " ";
  }
  cout << endl;

  cout << "Array 2: ";
  for (int num : arr2)
  {
    cout << num << " ";
  }
  cout << endl;

  cout << "Intersection: ";
  for (int num : intersection)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
