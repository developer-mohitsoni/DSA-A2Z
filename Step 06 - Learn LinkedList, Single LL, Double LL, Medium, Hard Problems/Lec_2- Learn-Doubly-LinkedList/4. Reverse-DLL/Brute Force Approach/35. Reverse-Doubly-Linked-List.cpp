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
  // if head is empty or there is only one element
  // we can directly just return the head
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  // Initialise a stack st
  stack<int> st;

  // Initialise the node pointer temp at head
  Node *temp = head;

  // Traverse the doubly linked list via the temp pointer
  while (temp != NULL)
  {
    // insert the data of the current node into the stack
    st.push(temp->data);
    // traverse further
    temp = temp->next;
  }

  // Reinitialise temp to head
  temp = head;

  // Second iteration of the DLL to replace the values
  while (temp != NULL)
  {
    // Replace the value pointed via temp with
    // the value from the top of the stack
    temp->data = st.top();
    // Pop the value from the stack
    st.pop();
    // Traverse further
    temp = temp->next;
  }

  // Return the updated doubly linked
  // where the values of nodes from both ends
  // has been swapped
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