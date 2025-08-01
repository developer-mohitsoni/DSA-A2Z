//! Program to Remove the N-th Node from the End of a Linked List

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(len) + O(len-k)
//* T.C:- Worst Case: O(2*len)
//* S.C:- O(1)

class Node
{
public:
  int data;   // Data stored in the node
  Node *next; // Pointer to the next node in the linked list

  // Constructors
public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
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

// Function to find length of the linked list
int findLength(Node *head)
{
  int length = 0;
  while (head != nullptr)
  {
    length++;
    head = head->next;
  }
  return length;
}

// Function to remove the N-th node from the end of the linked list
Node *removeNthFromEnd(Node *head, int k)
{
  if (head == nullptr || k <= 0)
    return head;

  int length = findLength(head);
  if (k > length)
    return head;

  // If removing the head
  if (k == length)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
  }

  // Find the (length-k)th node
  Node *current = head;
  for (int i = 1; i < length - k; i++)
  {
    current = current->next;
  }

  // Remove the k-th node from the end
  Node *temp = current->next;
  current->next = temp->next;
  delete temp;

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

  int removePosition;
  cout << "Enter the position of the node to remove from the end: ";
  cin >> removePosition;

  head = removeNthFromEnd(head, removePosition);

  // Printing the linked list after removal
  cout << "Linked list after removal: ";
  printLL(head);

  return 0;
}
