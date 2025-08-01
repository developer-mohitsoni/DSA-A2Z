//! Program to Reverse a Linked List Iteratively

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(2*N) => This is because we traverse the linked list twice: once to push the values onto the stack, and once to pop the values and update the linked list. Both traversals take O(N) time, hence time complexity  O(2N) ~ O(N).

//* S.C:- O(N) => The space complexity is O(N) because we are using a stack to store the values of the nodes, which can take up to N space in the worst case.

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

// Function to reverse the linked list iteratively
Node *reverseLL(Node *head)
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

  // Reversing the linked list
  head = reverseLL(head);

  // Printing the linked list after reversal
  cout << "Linked list after reversal: ";
  printLL(head);

  return 0;
}