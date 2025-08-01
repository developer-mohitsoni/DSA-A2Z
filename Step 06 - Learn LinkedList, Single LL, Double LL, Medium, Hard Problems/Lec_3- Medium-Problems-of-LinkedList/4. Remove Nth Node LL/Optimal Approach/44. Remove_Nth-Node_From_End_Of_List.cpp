//! Program to Remove the N-th Node from the End of a Linked List

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(len)
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

// Function to remove the N-th node from the end of the linked list
Node *removeNthFromEnd(Node *head, int k)
{
  if (head == nullptr || k <= 0)
    return head;

  // Create a dummy node to simplify edge cases
  Node *dummy = new Node(-1);
  dummy->next = head;

  Node *first = dummy;
  Node *second = dummy;

  // Move the first pointer k+1 steps ahead
  for (int i = 0; i <= k; i++)
  {
    if (first == nullptr)
      return head; // k is greater than the length of the list
    first = first->next;
  }

  // Move both pointers until the first reaches the end
  while (first != nullptr)
  {
    first = first->next;
    second = second->next;
  }

  // Remove the N-th node from the end
  Node *toDelete = second->next;
  second->next = toDelete->next;
  delete toDelete;

  // Get the new head
  Node *newHead = dummy->next;
  delete dummy; // Free the dummy node
  return newHead;
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

  int removePosition;
  cout << "Enter the position of the node to remove from the end: ";
  cin >> removePosition;

  head = removeNthFromEnd(head, removePosition);

  // Printing the linked list after removal
  cout << "Linked list after removal: ";
  printLL(head);

  // Freeing the allocated memory (optional, but good practice)
  Node *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }

  return 0;
}