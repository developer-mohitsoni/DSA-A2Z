//! Program to Delete the Middle Node of a Linked List using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N + N/2)
//* S.C:- O(1)

class Node
{
public:
  int data;   // Data stored in the node
  Node *next; // Pointer to the next node in the linked list

  // Constructors
public:
  Node(int data1, Node *next)
  {
    data = data1;
    next = next;
  }

  Node(int data1)
  {
    data = data1;
    next = nullptr; // nullptr
  }
};

// Function to print the linked list
void printLL(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// Function to delete the middle node of the linked list using brute force approach
Node *deleteMiddle(Node *head){
  if(head == nullptr || head->next == nullptr)
    return nullptr; // If the list is empty or has only one node, return nullptr

  Node *temp = head;

  int length = 0;

  // Calculate the length of the linked list
  while (temp != nullptr){
    length++;
    temp = temp->next;
  }

  if (length == 1)
    return nullptr; // If there's only one node, return nullptr

  int mid = length / 2; // Find the middle index
  temp = head;

  Node *prev = nullptr;
  for (int i = 0; i < mid; i++)
  {
    prev = temp; // Keep track of the previous node
    temp = temp->next; // Move to the next node
  }
  if (prev != nullptr)
    prev->next = temp->next; // Bypass the middle node
  delete temp; // Free the memory of the middle node
  return head;
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // Creating the linked list from user input
  Node *head = new Node(arr[0]);
  Node *current = head;
  for (int i = 1; i < n; i++)
  {
    current->next = new Node(arr[i]);
    current = current->next;
  }

  // Printing the linked list
  cout << "Linked list after insertion: ";
  printLL(head);

  // Deleting the middle node
  head = deleteMiddle(head);
  cout << "Linked list after deleting the middle node: ";
  printLL(head);

  return 0;
}