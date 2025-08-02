//! Program to Find the Starting Point of a Loop in a Linked List using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(2N*log(N))
//* S.C:- O(N)

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

// Function to find the starting point of a loop in the linked list using brute force approach
Node *findStartingPoint(Node *head)
{
  unordered_set<Node *> visited;
  Node *current = head;
  while (current != nullptr)
  {
    if (visited.count(current))
      return current; // If we have seen this node before, it's the start of the loop
    visited.insert(current);
    current = current->next;
  }
  return nullptr; // If no loop is found, return nullptr
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

  // Creating a loop for testing (optional)
  if (n > 1) // Ensure there are at least two nodes to create a loop
  {
    current->next = head->next->next->next; // Creating a loop by pointing the last node to the fourth node
    cout << "Loop created in the linked list." << endl;
  }
  else
  {
    cout << "No loop created in the linked list." << endl;
  }

  // Finding the starting point of the loop
  Node *loopStart = findStartingPoint(head);
  if (loopStart != nullptr)
    cout << "Loop found at node with value: " << loopStart->data << endl;
  else
    cout << "No loop found in the linked list." << endl;

  return 0;
}