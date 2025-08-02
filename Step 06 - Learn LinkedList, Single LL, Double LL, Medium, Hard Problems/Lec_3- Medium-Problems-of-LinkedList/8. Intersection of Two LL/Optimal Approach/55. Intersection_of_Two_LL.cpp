//! Program to Find the Intersection of Two Linked Lists using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(N1+N2)
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

Node *findIntersection(Node *head1, Node *head2){
  if(head1 == NULL || head2 == NULL)
    return NULL; // If either list is empty, return NULL

  Node *temp1 = head1;
  Node *temp2 = head2;

  while(temp1 != temp2){
    temp1 = temp1->next; // Traverse the first list
    temp2 = temp2->next; // Traverse the second list

    if(temp1 == temp2)
      return temp1; // If they meet, return the intersection node

    if(temp1 == NULL)
      temp1 = head2; // If reached the end of the first list, switch to the second list
    if(temp2 == NULL)
      temp2 = head1; // If reached the end of the second list, switch to
  }

  return temp1; // If they meet, return the intersection node
}

int main()
{
  int n1;
  cout << "Enter the size of array1: ";
  cin >> n1;

  vector<int> arr1(n1);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n1; i++)
    cin >> arr1[i];

  // Creating the linked list from user input
  Node *head1 = new Node(arr1[0]);
  Node *current = head1;
  for (int i = 1; i < n1; i++)
  {
    current->next = new Node(arr1[i]);
    current = current->next;
  }

  // Printing the linked list
  cout << "Linked list after insertion: ";
  printLL(head1);

  int n2;
  cout << "Enter the size of array2: ";
  cin >> n2;

  vector<int> arr2(n2);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n2; i++)
    cin >> arr2[i];

  // Creating the second linked list
  Node *head2 = new Node(arr2[0]);
  current = head2;
  for (int i = 1; i < n2; i++)
  {
    current->next = new Node(arr2[i]);
    current = current->next;
  }

  // Printing the second linked list
  cout << "Second linked list after insertion: ";
  printLL(head2);

  // Creating an intersection for demonstration
  // Assuming the intersection starts at the third node of the first list
  Node *intersectionNode = head1->next->next;

  // Connecting the end of the second list to the intersection node
  current->next = intersectionNode;

  // Finding the intersection
  Node *intersection = findIntersection(head1, head2);
  if (intersection != NULL)
  {
    cout << "Intersection found at node with data: " << intersection->data << endl;
  }
  else
  {
    cout << "No intersection found." << endl;
  }

  return 0;
}