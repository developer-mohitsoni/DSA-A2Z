//! Program to Add 1 to a Linked List using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(3N)
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

// Function to add 1 to the linked list
Node* addOne(Node *head)
{
  // Reverse the linked list
  Node *prev = reverseLL(head);

  // Add 1 to the reversed linked list
  Node *temp = prev;
  int carry = 1;
  while (temp != nullptr)
  {
    int sum = temp->data + carry;
    temp->data = sum % 10;
    carry = sum / 10;
    if (carry == 0)
      break; // No carry left, we can stop
    temp = temp->next;
  }
  // If carry is still left, we need to add a new node
  if (carry > 0)
  {
    Node *newNode = new Node(carry);
    head = reverseLL(prev); // Reverse back to original order
    newNode->next = head; // Add new node at the beginning
    return newNode; // Return the new head of the list
  }
  head = reverseLL(prev); // Reverse back to original order
  return head; // Return the original head of the list
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

  // Adding 1 to the linked list
  head = addOne(head);

  // Printing the updated linked list
  cout << "Linked list after adding 1: ";
  printLL(head);

  return 0;
}