//! Program to Reverse Nodes in K-Group in a Linked List

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

// Function to reverse the linked list
Node *reverseList(Node *head)
{
  Node *prev = nullptr;
  Node *current = head;
  while (current != nullptr)
  {
    Node *next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

// Function to reverse nodes in k-group in the linked list
Node *reverseKGroup(Node *head, int k)
{
  if (head == nullptr || k <= 1)
    return head;

  Node *dummy = new Node(0);
  dummy->next = head;
  Node *prevGroupEnd = dummy;

  while (true)
  {
    Node *kth = prevGroupEnd;
    for (int i = 0; i < k && kth != nullptr; i++)
    {
      kth = kth->next;
    }
    if (kth == nullptr)
      break;

    Node *nextGroupStart = kth->next;
    kth->next = nullptr;

    // Reverse the current k-group
    Node *reversedHead = reverseList(prevGroupEnd->next);
    prevGroupEnd->next = reversedHead;
    // Connect the reversed group to the next group
    while (reversedHead->next != nullptr)
    {
      reversedHead = reversedHead->next;
    }
    reversedHead->next = nextGroupStart;

    // Move to the next group
    prevGroupEnd = reversedHead;
  }

  return dummy->next;
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

  // Reversing nodes in k-group
  int k;
  cout << "Enter the value of k: ";
  cin >> k;

  head = reverseKGroup(head, k);

  // Printing the linked list after reversing nodes in k-group
  cout << "Linked list after reversing nodes in k-group: ";
  printLL(head);

  return 0;
}