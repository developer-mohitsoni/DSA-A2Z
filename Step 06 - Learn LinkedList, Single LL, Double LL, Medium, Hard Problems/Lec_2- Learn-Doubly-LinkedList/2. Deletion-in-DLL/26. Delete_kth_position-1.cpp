//! Program to Delete the kth-position of the Node in the Doubly Linked List

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
        head->back = nullptr;
        delete temp;
        cout << "Head node deleted successfully." << endl;
    }
    return head;
}

Node *tailDeletion(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty, cannot delete tail." << endl;
        return head;
    }
    else if (head->next == nullptr)
    {
        delete head;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    Node *tail = temp->next;
    temp->next = tail->next;
    delete tail;
    cout << "Tail node deleted successfully." << endl;
    return head;
}

Node *deleteKthPosition(Node *head, int kthPosition)
{
    if (head == nullptr)
    {
        cout << "List is empty, cannot delete kth position." << endl;
        return head;
    }
    else if (kthPosition == 1) // Delete the head node
    {
        return headDeletion(head);
    }
    else if (kthPosition > lengthDLL(head))
    {
        cout << "kth position is out of range." << endl;
    }

    Node *temp = head;
    for (int i = 1; i < kthPosition - 1; i++)
    {
        if (temp == nullptr)
        {
            cout << "kth position is out of range." << endl;
            return head;
        }
        temp = temp->next;
    }
    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    if (nodeToDelete->next != nullptr)
    {
        nodeToDelete->next->back = temp;
    }
    delete nodeToDelete;
    cout << "Node at position " << kthPosition << " deleted successfully." << endl;
    return head; // Return the updated DLL
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

    // Searching for an element in the Doubly linked list
    int element;
    cout << "Enter the element to search for: ";
    cin >> element;
    searchElement(head, element);

    // Deleting the head node
    head = headDeletion(head);
    cout << "Doubly Linked list after deleting head: ";

    printDLL(head);

    cout << endl;

    // Deleting the tail node
    head = tailDeletion(head);
    cout << "Doubly Linked list after deleting tail: ";

    printDLL(head);

    cout << endl;

    // Deleting a node at a given position
    int position;
    cout << "Enter the position to delete: ";
    cin >> position;
    head = deleteKthPosition(head, position);
    cout << "Doubly Linked list after deleting at position " << position << ": ";

    printDLL(head);

    cout << endl;

    return 0;
}