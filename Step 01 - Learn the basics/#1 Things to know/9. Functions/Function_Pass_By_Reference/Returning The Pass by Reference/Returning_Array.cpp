#include <bits/stdc++.h>

using namespace std;

// int* passAndReturnArray(int arr[], int size) {
// Both line are same

int *passAndReturnArray(int *arr, int size)
{
  // Modify the array elements
  for (int i = 1; i <= size; i++)
  {
    arr[i] += 10;
  }

  // Return a pointer to the modified array
  return arr;
}

int main()
{
  int size = 10;

  // Allocate memory for the array 10 size

  // new int[size] dynamically memory allocate karta hai size ke equal integer elements ke liye.
  // Yeh pointer arr memory block ka first address rakhta hai
  int *arr = new int[size];

  // Initialize the array elements

  // Yeh for loop array ke elements ko initialize karta hai.
  // arr[i] = i har index par uska index number assign karta hai.
  for (int i = 1; i <= size; i++)
  {

    // Note: Yeh initialization 1-based indexing se shuru hota hai, toh arr[0] garbage value rakhta hai.
    arr[i] = i;
  }
  // Here we don't assign any value in arr[0] so, it contains some garbage value
  cout << arr[0] << " " << arr[1] << " " << endl;

  // Pass the array to the function and get the modified array back
  int *modifiedArray = passAndReturnArray(arr, size); /*This modifiedArray now becomes the Array*/

  // Print the modified array elements
  for (int i = 1; i <= size; i++)
  {
    cout << modifiedArray[i] << " ";
  }
  cout << endl;

  // Delete the allocated memory
  delete[] modifiedArray;
  delete[] arr;

  return 0;
}
