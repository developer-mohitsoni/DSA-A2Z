//! Program to Detect a Loop in a Linked List using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N * 2*log(N))
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

// Function to detect a loop in the linked list using brute force approach
bool detectLoop(Node *head)
{
  unordered_set<Node *> visited;
  Node *temp = head;

  while (temp != nullptr)
  {
    if (visited.find(temp) != visited.end())
      return true; // Loop detected

    visited.insert(temp);
    temp = temp->next;
  }

  return false; // No loop found
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
    current->next = head->next->next; // Creating a loop by pointing the last node to the third node
    cout << "Loop created in the linked list." << endl;
  }
  else
  {
    cout << "No loop created in the linked list." << endl;
  }

  // Detecting loop in the linked list
  if (detectLoop(head))
    cout << "Loop detected in the linked list." << endl;
  else
    cout << "No loop detected in the linked list." << endl;

  return 0;
}