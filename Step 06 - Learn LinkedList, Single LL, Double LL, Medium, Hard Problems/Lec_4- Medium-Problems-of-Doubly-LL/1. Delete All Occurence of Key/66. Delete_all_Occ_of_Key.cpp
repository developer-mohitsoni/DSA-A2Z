//! Program to delete all occurrences of a key in a Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

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

// Function to delete all occurrences of a key in the doubly linked list
Node *deleteAllOccurrences(Node *head, int key)
{
  Node *current = head;
  while (current != nullptr)
  {
    if (current->data == key)
    {
      // If the node to be deleted is the head
      if (current == head)
      {
        head = head->next;
        if (head != nullptr)
          head->back = nullptr;
      }
      else
      {
        // Adjust the pointers to bypass the current node
        if (current->back != nullptr)
          current->back->next = current->next;
        if (current->next != nullptr)
          current->next->back = current->back;
      }
      // Delete the current node
      Node *temp = current;
      current = current->next;
      delete temp;
    }
    else
    {
      current = current->next;
    }
  }
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

  int key;
  cout << "Enter the key to delete all occurrences: ";
  cin >> key;

  // Deleting all occurrences of the key
  head = deleteAllOccurrences(head, key);

  // Printing the updated Doubly linked list
  cout << "Doubly Linked list after deletion: ";
  printDLL(head);

  return 0;
}