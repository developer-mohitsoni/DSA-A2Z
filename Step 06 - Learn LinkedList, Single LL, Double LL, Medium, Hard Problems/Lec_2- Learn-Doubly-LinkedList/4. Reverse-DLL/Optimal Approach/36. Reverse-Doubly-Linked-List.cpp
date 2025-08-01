//! Program to Reverse a Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(N) => for traversal in the linked list

//* S.C => O(1) => constant space complexity

//* Memory Space:-

/*
*            32 Bit System               64 Bit System

*            Int - 4 Bytes               Int - 4 Bytes
*            Pointer - 4 Bytes           Pointer - 8 Bytes
*            Overall - 8 Bytes           Overall - 12 Byte
*/
class Node
{
public:
  Node *back; // Pointer to the previous node in the DLL
  int data;   // Data stored in the node
  Node *next; // Pointer to the next node in the DLL

  // Constructors
  Node(int data1, Node *next, Node *back)
  {
    this->back = back;
    this->data = data1;
    this->next = next;
  }

  Node(int data1)
  {
    this->back = nullptr; // Pointer to the previous node in the DLL
    this->data = data1;
    this->next = nullptr; // Pointer to the next node in the DLL
  }
};

// Function to print the linked list
void printDLL(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void printReverseDLL(Node *head)
{
  Node *temp = head;

  // Traverse to the last node
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  // Print the elements in reverse order
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->back;
  }
  cout << endl;
}

Node *reverseDLL(Node *head)
{
  if(head == nullptr || head->next == nullptr)
  {
    return head; // If the list is empty or has only one node, return it as is
  }

  Node *prev = nullptr;
  Node *current = head;

  // Traverse the list and swap next and back pointers
  while (current != nullptr)
  {
    prev = current->back; // Store the previous node
    current->back = current->next; // Swap next and back pointers
    current->next = prev; // Set next to the previous node
    current = current->back; // Move to the next node (which is now back)
  }

  // Update head to the new first node
  if (prev != nullptr)
    head = prev->back;

  return head;
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  // Check for valid input size
  if (n <= 0)
  {
    cout << "Array size must be greater than 0." << endl;
    return 0;
  }

  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // Creating the linked list from user input
  Node *head = new Node(arr[0]);
  Node *prev = head;
  for (int i = 1; i < n; i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = temp;
  }

  // Printing the Doubly linked list
  cout << "Doubly Linked list after insertion: ";
  printDLL(head);

  head = reverseDLL(head);
  cout << "Doubly Linked list after reversal: ";
  printDLL(head);

  return 0;
}