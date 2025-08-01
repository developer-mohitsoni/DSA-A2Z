//! Program to Add Two Numbers in Linked List

#include <bits/stdc++.h>
using namespace std;


//* T.C: O(max(m, n)), where m and n are the lengths of the two linked lists.
//* S.C: O(max(m, n)), for the resultant linked list.

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

// Function to add two numbers represented by linked lists
Node *addTwoNumbers(Node *l1, Node *l2){
  Node *dummyHead = new Node(-1);
  Node *current = dummyHead;
  int carry = 0;

  while (l1 != nullptr || l2 != nullptr || carry > 0) {
    int sum = carry;
    if (l1 != nullptr) {
      sum += l1->data;
      l1 = l1->next;
    }
    if (l2 != nullptr) {
      sum += l2->data;
      l2 = l2->next;
    }
    
    carry = sum / 10;
    current->next = new Node(sum % 10);
    current = current->next;
  }

  return dummyHead->next; // Return the next node to skip the dummy head
}

int main()
{
  int n1;
  cout << "Enter the size of array1: ";
  cin >> n1;

  vector<int> arr(n1);
  cout << "Enter the elements of the array1: ";
  for (int i = 0; i < n1; i++)
    cin >> arr[i];

  // Creating the linked list from user input
  Node *head1 = new Node(arr[0]);
  Node *current = head1;
  for (int i = 1; i < n1; i++)
  {
    current->next = new Node(arr[i]);
    current = current->next;
  }

  // Printing the linked list
  cout << "Linked list after insertion: ";
  printLL(head1);

  int n2;
  cout << "Enter the size of second array2: ";
  cin >> n2;

  vector<int> arr2(n2);
  cout << "Enter the elements of the second array2: ";
  for (int i = 0; i < n2; i++)
    cin >> arr2[i];

  // Creating the second linked list from user input
  Node *head2 = new Node(arr2[0]);
  Node *current2 = head2;
  for (int i = 1; i < n2; i++)
  {
    current2->next = new Node(arr2[i]);
    current2 = current2->next;
  }

  // Printing the second linked list
  cout << "Second linked list after insertion: ";
  printLL(head2);

  // Adding the two numbers represented by linked lists
  Node *result = addTwoNumbers(head1, head2);
  cout << "Resultant linked list after addition: ";
  printLL(result);

  return 0;
}