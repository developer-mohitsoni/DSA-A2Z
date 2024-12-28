//! Program to find the Length of the Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(N) => for traversal in the linked list

//* S.C => O(1) => constant space complexity

//* Memory Space:-

/*
*            32 Bit System               64 Bit System

*            Int - 4 Bytes               Int - 4 Bytes
*            Pointer - 4 Bytes           Pointer - 8 Bytes
*            Overall - 8 Bytes           Overall - 12 Byte
*/
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

void printReverseDLL(Node *head)
{
    Node *temp = head;

    // Traverse to the last node
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Print the elements in reverse order
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->back;
    }
    cout << endl;
}

int lengthDLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    // Printing the Doubly linked list in reverse order
    cout << "Doubly Linked list in reverse order: ";
    printReverseDLL(head);

    // Finding the length of the Doubly linked list
    int length = lengthDLL(head);
    cout << "Length of the Doubly Linked list: " << length << endl;

    return 0;
}