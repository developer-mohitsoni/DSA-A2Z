//! Program to Reverse a Linked List Iteratively

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N) => The code traverses the entire linked list once, where 'n' is the number of nodes in the list. This traversal has a linear time complexity, O(n).

//* S.C:- O(1) => The code uses a constant amount of space, regardless of the size of the linked list. It only uses a few pointers to keep track of the current, previous, and next nodes, which does not depend on the size of the input.

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

// Function to reverse the linked list iteratively
Node *reverseLL(Node *head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;

  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
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

  // Reversing the linked list
  head = reverseLL(head);

  // Printing the linked list after reversal
  cout << "Linked list after reversal: ";
  printLL(head);

  return 0;
}