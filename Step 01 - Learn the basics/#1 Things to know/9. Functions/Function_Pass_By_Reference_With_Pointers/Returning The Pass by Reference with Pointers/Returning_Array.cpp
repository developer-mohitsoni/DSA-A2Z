#include <bits/stdc++.h>
using namespace std;

int *passAndReturnArray(int *arr, int size)
{
  // Modify the array elements
  for (int i = 0; i < size; i++)
  { // Fixed indexing from 0
    arr[i] += 10;
  }

  // Return a pointer to the modified array
  return arr;
}

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  // Allocate memory for the array
  int *arr = new int[size];

  // Initialize the array elements
  for (int i = 0; i < size; i++)
  { // Fixed indexing from 0
    cin >> arr[i];
  }

  // Pass the array to the function and get the modified array back
  int *modifiedArray = passAndReturnArray(arr, size); /* This modifiedArray now becomes the Array */

  // Print the modified array elements
  for (int i = 0; i < size; i++)
  { // Fixed indexing from 0
    cout << modifiedArray[i] << " ";
  }
  cout << endl;

  // Delete the allocated memory (only once)
  delete[] arr;

  return 0;
}
