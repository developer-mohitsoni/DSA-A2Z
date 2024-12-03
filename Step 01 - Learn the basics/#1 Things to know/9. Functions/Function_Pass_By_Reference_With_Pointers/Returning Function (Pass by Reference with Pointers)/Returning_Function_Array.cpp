#include<bits/stdc++.h>

using namespace std;


int* passAndReturnArray(int* arr, int size) {
  // Modify the array elements
  for (int i = 1; i <= size; i++) {
    arr[i] += 10;
  }

  // Return a pointer to the modified array
  return arr;
}

int main() {
  int size = 10;

  // Allocate memory for the array
  int* arr = new int[size];

  // Initialize the array elements
  for (int i = 1; i <= size; i++) {
    arr[i] = i;
  }

  // Pass the array to the function and get the modified array back
  int* modifiedArray = passAndReturnArray(arr, size); /*This modifiedArray now becomes the Array*/

  // Print the modified array elements
  for (int i = 1; i <= size; i++) {
    cout << modifiedArray[i] << " ";
  }
  cout << endl;

  // Delete the allocated memory
  delete[] modifiedArray;
  delete[] arr;

  return 0;
}