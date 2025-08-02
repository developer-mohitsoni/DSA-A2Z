//! Program to Delete the Middle Node of a Linked List using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N)
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
Node *deleteMiddle(Node *head)
{
  if (head == nullptr || head->next == nullptr)
    return nullptr; // If the list is empty or has only one node, return nullptr

  Node *slow = head;
  Node *fast = head;
  Node *prev = nullptr;

  // Finding the middle node using the slow and fast pointer technique
  while (fast != nullptr && fast->next != nullptr)
  {
    prev = slow;          // Keep track of the previous node
    slow = slow->next;   // Move slow pointer by one step
    fast = fast->next->next; // Move fast pointer by two steps
  }

  // Deleting the middle node
  if (prev != nullptr)
    prev->next = slow->next; // Bypass the middle node

  delete slow; // Free memory of the deleted node
  return head; // Return the modified list
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