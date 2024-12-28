//! Program to Insert a Node at the head of the Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C =>
// O(N) => for traversal in the linked list

// O(N) => for returning the length of the linked list

// O(N) => for searching an element in the linked list at worst case if element is not found, O(1)=> If element is found at the head of the linked list, O(N/2)=> If element is found b/w the linked list

// O(1) => to Insert a node at the head of the linked list

// TOTAL:- O(3N) => O(N)

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

int lengthLL(Node *head)
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

void searchElement(Node *head, int element)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == element)
        {
            cout << "Element " << element << " found in the linked list " << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Element not found in the linked list." << endl;
}

Node *headInsertion(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    return newNode;
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

    cout << endl;

    // Finding the length of the linked list
    int length = lengthLL(head);
    cout << "Length of the linked list: " << length << endl;

    cout << endl;

    // Searching for an element
    int element;
    cout << "Enter the element to search for: ";
    cin >> element;
    searchElement(head, element);

    cout << endl;

    // Inserting a node at the head of the linked list
    int data;
    cout << "Enter the data for the new node: ";
    cin >> data;

    head = headInsertion(head, data);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    return 0;
}