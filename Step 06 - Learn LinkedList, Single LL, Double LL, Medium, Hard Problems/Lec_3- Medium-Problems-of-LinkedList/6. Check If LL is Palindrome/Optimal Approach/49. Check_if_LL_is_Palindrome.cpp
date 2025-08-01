//! Program to Check if a Linked List is Palindrome using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//* T.C:- O(2N)
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

// Function to check if the linked list is a palindrome
// Two Pointer Approach
bool isPalindrome(Node *head){
  if (head == nullptr || head->next == nullptr)
    return true; // An empty list or a single node is a palindrome

  // Find the middle of the linked list using the slow and fast pointer technique
  Node *slow = head, *fast = head;
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  // Reverse the second half of the linked list
  Node *prev = nullptr, *current = slow, *nextNode;
  while (current != nullptr)
  {
    nextNode = current->next;
    current->next = prev;
    prev = current;
    current = nextNode;
  }

  // Compare the first half and the reversed second half
  Node *firstHalf = head, *secondHalf = prev;
  while (secondHalf != nullptr)
  {
    if (firstHalf->data != secondHalf->data)
      return false; // If any element doesn't match, it's not a palindrome
    firstHalf = firstHalf->next;
    secondHalf = secondHalf->next;
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