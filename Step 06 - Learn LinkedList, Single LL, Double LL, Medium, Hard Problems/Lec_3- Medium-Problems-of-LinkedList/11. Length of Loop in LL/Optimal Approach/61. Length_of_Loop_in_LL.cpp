//! Program to Find the Length of a Loop in a Linked List using Optimal Approach

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

// Function to find the length of the loop in the linked list using optimal approach
int lengthOfLoop(Node *head)
{
  if (head == nullptr || head->next == nullptr)
    return 0;

  Node *slow = head;
  Node *fast = head;

  // Detecting the loop using Floyd's Cycle-Finding Algorithm
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) // Loop detected
    {
      int length = 1;
      Node *temp = slow->next;
      while (temp != slow)
      {
        length++;
        temp = temp->next;
      }
      return length; // Return the length of the loop
    }
  }

  return 0; // No loop found
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

  // Finding the length of the loop in the linked list
  int loopLength = lengthOfLoop(head);
  if (loopLength > 0)
    cout << "Length of the loop in the linked list: " << loopLength << endl;
  else
    cout << "No loop found in the linked list." << endl;

  return 0;
}