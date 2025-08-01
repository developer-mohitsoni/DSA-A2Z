//! Program to Reverse a Linked List Iteratively

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N) => This is because we traverse the linked list twice: once to push the values onto the stack, and once to pop the values and update the linked list. Both traversals take O(N) time.

//* S.C:- O(1) => No additional space is used explicitly for data structures or allocations during the linked list reversal process. However, it's important to note that there is an implicit use of stack space due to recursion. This recursive stack space stores function calls and associated variables during the recursive traversal and reversal of the linked list. Despite this, no extra memory beyond the program's existing execution space is allocated, hence maintaining a space complexity of O(1).

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

// Function to reverse the linked list recursively

// Can you dry run of this below code to understand how it works?

Node *reverseLL(Node *head)
{
  // Base case: empty list or end of list
  if (head == nullptr || head->next == nullptr)
  {
    return head;
  }

  // Recursive case: reverse the rest of the list
  Node *newHead = reverseLL(head->next);

  Node* front = head->next; // Store the next node
  front->next = head; // Reverse the link
  head->next = nullptr; // Set the current node's next to nullptr

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

  // Reversing the linked list
  head = reverseLL(head);

  // Printing the linked list after reversal
  cout << "Linked list after reversal: ";
  printLL(head);

  return 0;
}