//! Program to Sort a Linked List of 0's, 1's, and 2's

#include <bits/stdc++.h>
using namespace std;

//* T.C: O(2n) => where n is the number of nodes in the linked list.
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

  Node *temp = head;

  int zeroCount=0, oneCount=0, twoCount=0;

  while(temp != nullptr)
  {
    if(temp->data == 0)
      zeroCount++;
    else if(temp->data == 1)
      oneCount++;
    else if(temp->data == 2)
      twoCount++;
    
    temp = temp->next;
  }

  temp = head;
  while(temp != nullptr)
  {
    if(zeroCount > 0)
    {
      temp->data = 0;
      zeroCount--;
    }
    else if(oneCount > 0)
    {
      temp->data = 1;
      oneCount--;
    }
    else if(twoCount > 0)
    {
      temp->data = 2;
      twoCount--;
    }
    
    temp = temp->next;
  }
  return head; // Return the modified list starting from head
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