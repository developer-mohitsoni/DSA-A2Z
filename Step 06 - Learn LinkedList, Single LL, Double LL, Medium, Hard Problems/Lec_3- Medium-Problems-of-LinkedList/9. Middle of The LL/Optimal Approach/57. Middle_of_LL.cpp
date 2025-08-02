//! Program to Find the Middle of a Linked List using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N/2)
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

// Two-pointer approach to find the middle node
Node *findMiddle(Node *head)
{
  if (head == nullptr || head->next == nullptr) // If the list is empty or has only one node, return it
    return head;

  Node *slow = head;
  Node *fast = head;

  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow; // Return the middle node
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

  // Finding the middle node
  Node *middleNode = findMiddle(head);
  if (middleNode != nullptr)
  {
    cout << "Middle node found with data: " << middleNode->data << endl;
  }
  else
  {
    cout << "No middle node found." << endl;
  }

  return 0;
}