//! Program to Delete the Node by its Value in the Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C =>
// O(N) => for traversal in the linked list

// O(N) => for returning the length of the linked list

// O(N) => for searching an element in the linked list at worst case if element is not found, O(1)=> If element is found at the head of the linked list, O(N/2)=> If element is found b/w the linked list

// O(1) => to Delete the head of the linked list

// O(1) => to Delete the tail of the linked list

// O(k) => Traversal depends on the position k. In the worst case, k = n, which takes O(N)

// O(N) =>  In the worst case, the target value is not in the list, requiring a traversal of all n nodes.

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

public:
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

    Node *temp = head;
    int count = 1;

    // Traverse to the (k-1)-th node
    while (temp != nullptr && count < kthPosition - 1)
    {
        temp = temp->next;
        count++;
    }

    // If k is out of bounds
    if (!temp || !temp->next)
    {
        cout << "Position out of bounds. No deletion performed." << endl;
        return head;
    }

    // If deleting the last node, use deleteTail
    if (!temp->next->next)
    {
        return tailDeletion(head);
    }

    // Delete the k-th node
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;

    return head;
}

Node *deleteAtValue(Node *head, int value)
{
    if (head == nullptr)
    {
        cout << "List is empty, cannot delete value." << endl;
        return head;
    }
    else if (head->data == value)
    {
        return headDeletion(head);
    }
    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != value)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "Value not found in the linked list." << endl;
        return head;
    }
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
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

    // Deleting a node at a given position
    int position;
    cout << "Enter the position to delete: ";
    cin >> position;
    head = deleteKthPosition(head, position);
    cout << "Linked list after deleting at position " << position << ": ";
    printLL(head);

    cout << endl;

    // Deleting a node with a given value
    int value;
    cout << "Enter the value to delete: ";
    cin >> value;
    head = deleteAtValue(head, value);
    cout << "Linked list after deleting value " << value << ": ";
    printLL(head);

    return 0;
}