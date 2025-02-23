#include <bits/stdc++.h>
using namespace std;

array<int, 5> &modifyArray(array<int, 5> &arr)
{
  for (int &num : arr)
  {
    num *= 2;
  }
  return arr;
}

int main()
{
  array<int, 5> myArray = {1, 2, 3, 4, 5};

  array<int, 5> &modifiedArray = modifyArray(myArray);

  cout << "Modified array: ";
  for (int num : modifiedArray)
  {
    cout << num << " ";
  }

  return 0;
}
