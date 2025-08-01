//! Program to Segegregate Odd and Even Nodes in a Linked List

#include <bits/stdc++.h>
using namespace std;

//* T.C: O(n/2)*2 = O(n), where n is the number of nodes in the linked list.
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

// Function to segregate odd and even nodes in a linked list
Node *oddEvenList(Node *head)
{
  if (!head || !head->next)
    return head;

  Node *oddHead = head;
  Node *evenHead = head->next;
  Node *oddTail = oddHead;
  Node *evenTail = evenHead;

  Node *current = evenHead->next;
  int index = 3;

  while (current)
  {
    if (index % 2 == 1)
    {
      oddTail->next = current;
      oddTail = oddTail->next;
    }
    else
    {
      evenTail->next = current;
      evenTail = evenTail->next;
    }
    current = current->next;
    index++;
  }

  oddTail->next = evenHead;
  evenTail->next = nullptr;

  return oddHead;
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

  // Segregating odd and even nodes
  Node *result = oddEvenList(head);
  cout << "Linked list after segregation: ";
  printLL(result);

  return 0;
}