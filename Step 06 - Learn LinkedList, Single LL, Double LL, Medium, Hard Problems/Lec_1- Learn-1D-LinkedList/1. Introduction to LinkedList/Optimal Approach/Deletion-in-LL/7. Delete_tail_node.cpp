//! Program to Delete a tail of the Node in the Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C =>
// O(N) => for traversal in the linked list

// O(N) => for returning the length of the linked list

// O(N) => for searching an element in the linked list at worst case if element is not found, O(1)=> If element is found at the head of the linked list, O(N/2)=> If element is found b/w the linked list

// O(1) => to Delete the head of the linked list

// O(N) => to Delete the tail of the linked list

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

Node *headDeletion(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty, cannot delete head." << endl;
        return head;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Head deleted successfully." << endl;
    }
    return head;
}

Node *tailDeletion(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        cout << "List is empty, cannot delete tail." << endl;
        return head;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    cout << "Tail deleted successfully." << endl;

    return head;
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

    // Deleting the head of the linked list
    head = headDeletion(head);
    cout << "Linked list after deleting head: ";
    printLL(head);

    cout << endl;

    // Deleting the tail of the linked list
    head = tailDeletion(head);
    cout << "Linked list after deleting tail: ";
    printLL(head);

    cout << endl;

    return 0;
}