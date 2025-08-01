//! Program to Add 1 to a Linked List using Optimal Approach

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

Node *reverseLL(Node *head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;

  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

// Function to add 1 to the linked list (Recursive Approach)
int addHelper(Node *temp){
  if (temp == nullptr)
    return 1; // Base case: if we reach the end, we need to add 1

  int carry = addHelper(temp->next); // Recursive call to the next node
  temp->data +=  carry; // Add carry to the current node's data

  if (temp->data < 10)
    return 0;

  temp->data = 0;
  return 1;
}

Node *addOne(Node *head){
  int carry = addHelper(head);
  if (carry == 1) {
    // If there's a carry, we need to add a new node at the beginning
    Node *newNode = new Node(1);
    newNode->next = head;
    head = newNode;
  }
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

  // Adding 1 to the linked list
  head = addOne(head);

  // Printing the updated linked list
  cout << "Linked list after adding 1: ";
  printLL(head);

  return 0;
}