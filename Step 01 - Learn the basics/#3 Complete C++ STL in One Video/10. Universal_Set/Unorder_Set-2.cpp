#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> findUniqueElements(vector<int> &arr)
{
  unordered_set<int> uniqueSet;
  vector<int> result;

  // Elements ko unordered_set me add karna
  for (int num : arr)
  {
    uniqueSet.insert(num);
  }

  // Set ke elements ko result me copy karna
  for (int num : uniqueSet)
  {
    result.push_back(num);
  }

  return result;
}

int main()
{
  vector<int> arr = {1, 2, 5, 1, 7, 2, 4, 2};

  vector<int> uniqueElements = findUniqueElements(arr);

  cout << "Original array: ";
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  cout << "Unique elements: ";
  for (int num : uniqueElements)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
