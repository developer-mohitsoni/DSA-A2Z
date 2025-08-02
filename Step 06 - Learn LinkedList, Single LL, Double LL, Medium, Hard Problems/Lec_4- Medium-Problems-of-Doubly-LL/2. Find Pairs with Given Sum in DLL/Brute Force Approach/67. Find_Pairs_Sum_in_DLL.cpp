  //! Program to delete all occurrences of a key in a Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(N^2)
//* S.C => O(1)

class Node
{
public:
  Node *back; // Pointer to the previous node in the DLL
  int data;   // Data stored in the node
  Node *next; // Pointer to the next node in the DLL

  // Constructors
  Node(int data1, Node *next, Node *back)
  {
    this->back = back;
    this->data = data1;
    this->next = next;
  }

  Node(int data1)
  {
    this->back = nullptr; // Pointer to the previous node in the DLL
    this->data = data1;
    this->next = nullptr; // Pointer to the next node in the DLL
  }
};

// Function to print the linked list
void printDLL(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// Function to find pairs with a given sum in the doubly linked list
Node *findPairsWithGivenSum(Node *head, int targetSum)
{
  if (head == nullptr || head->next == nullptr)
  {
    cout << "No pairs found." << endl;
    return head; // Return the head of the list if it's empty or has only one node
  }
  pair<int, int> pair;
  Node *temp1 = head;

  while(temp1 != nullptr)
  {
    Node *temp2 = temp1->next;
    while (temp2 != nullptr && temp1->data + temp2->data <= targetSum) // Avoid pairing with itself
    {
      if (temp1->data + temp2->data == targetSum)
      {
        pair.first = temp1->data;
        pair.second = temp2->data;
        cout << "(" << pair.first << ", " << pair.second << ") ";
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
  if (pair.first == 0 && pair.second == 0)
  {
    cout << "No pairs found." << endl;
  }
  cout << endl;
  
  return head; // Return the head of the list
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  // Check for valid input size
  if (n <= 0)
  {
    cout << "Array size must be greater than 0." << endl;
    return 0;
  }

  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // Creating the linked list from user input
  Node *head = new Node(arr[0]);
  Node *prev = head;
  for (int i = 1; i < n; i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = temp;
  }

  // Printing the Doubly linked list
  cout << "Doubly Linked list after insertion: ";
  printDLL(head);

  // Find pairs with the given sum
  cout << "Pairs with the given sum: ";
  int targetSum;
  cin >> targetSum;
  findPairsWithGivenSum(head, targetSum);

  // Printing the Doubly linked list after finding pairs
  cout << "Doubly Linked list after finding pairs: ";
  printDLL(head);

  return 0;
}