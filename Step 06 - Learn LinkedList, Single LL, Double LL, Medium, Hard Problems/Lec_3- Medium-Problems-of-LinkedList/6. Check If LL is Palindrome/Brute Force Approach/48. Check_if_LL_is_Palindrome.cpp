//! Program to Check if a Linked List is Palindrome using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(2N)
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

// Function to check if the linked list is a palindrome
bool isPalindrome(Node *head)
{
  if (head == nullptr || head->next == nullptr)
    return true; // An empty list or a single node is a palindrome

  // Use a stack to store the elements of the linked list
  stack<int> s;
  Node *temp = head;

  while (temp != nullptr)
  {
    s.push(temp->data);
    temp = temp->next;
  }

  // Check if the linked list is a palindrome
  temp = head;
  while (temp != nullptr)
  {
    if (temp->data != s.top())
      return false; // If any element doesn't match, it's not a palindrome
    s.pop();
    temp = temp->next;
  }

  return true; // All elements matched, it's a palindrome
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

  // Checking if the linked list is a palindrome
  if (isPalindrome(head))
    cout << "The linked list is a palindrome." << endl;
  else
    cout << "The linked list is not a palindrome." << endl;

  return 0;
}