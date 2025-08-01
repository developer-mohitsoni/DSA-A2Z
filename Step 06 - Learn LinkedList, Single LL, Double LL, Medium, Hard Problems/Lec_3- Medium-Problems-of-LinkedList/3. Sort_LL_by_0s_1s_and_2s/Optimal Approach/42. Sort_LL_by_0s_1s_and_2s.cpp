//! Program to Sort a Linked List of 0's, 1's, and 2's

#include <bits/stdc++.h>
using namespace std;

//* T.C: O(n) => where n is the number of nodes in the linked list.
//* S.C: O(1), as we are not using any extra space for the nodes

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

// Function to sort a linked list containing 0's, 1's, and 2's
Node *sortLinkedList(Node *head)
{
  if (head == nullptr || head->next == nullptr)
    return head; // If the list is empty or has only one node, return it as is

  Node *zeroHead = new Node(-1); // Dummy head for 0's
  Node *oneHead = new Node(-1);  // Dummy head for 1's
  Node *twoHead = new Node(-1);  // Dummy head for 2's

  Node *zeroTail = zeroHead;
  Node *oneTail = oneHead;
  Node *twoTail = twoHead;

  while (head != nullptr)
  {
    if (head->data == 0)
    {
      zeroTail->next = head;
      zeroTail = zeroTail->next;
    }
    else if (head->data == 1)
    {
      oneTail->next = head;
      oneTail = oneTail->next;
    }
    else
    {
      twoTail->next = head;
      twoTail = twoTail->next;
    }
    head = head->next;
  }

  // Connect the three lists
  zeroTail->next = oneHead->next ? oneHead->next : twoHead->next; // Connect to the first non-empty list
  oneTail->next = twoHead->next;                                  // Connect to the second non-empty list
  twoTail->next = nullptr;                                        // End the last list

  delete oneHead; // Free the dummy head for 1's
  delete twoHead; // Free the dummy head for 2's

  return zeroHead->next; // Return the sorted linked list starting from the first node of zero's list
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

  // Sorting the linked list
  Node *sortedHead = sortLinkedList(head);
  cout << "Linked list after sorting: ";
  printLL(sortedHead);

  // Freeing the allocated memory (optional, but good practice)
  Node *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }

  // Freeing the allocated memory (optional, but good practice)
  while (sortedHead != nullptr)
  {
    temp = sortedHead;
    sortedHead = sortedHead->next;
    delete temp;
  }

  return 0;
}