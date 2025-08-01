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
  if(head == nullptr || head->next == nullptr)
    return head;

  Node *odd = head;
  Node *even = head->next;

  Node *evenHead = even; // Store the head of the even list

  while(even != nullptr && even->next != nullptr)
  {
    odd->next = even->next; // Link the next odd node
    odd = odd->next;        // Move to the next odd node

    even->next = odd->next; // Link the next even node
    even = even->next;      // Move to the next even node
  }
  odd->next = evenHead; // Link the end of odd list to the head of even list
  return head;          // Return the modified list starting from head
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