//! Program to Delete the Node by its Value in the Doubly Linked List

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
    if (head == nullptr || head->next == nullptr)
    {
        cout << "List is empty, cannot delete head." << endl;
        return head;
    }
    else
    {
        Node *prev = head;
        head = head->next;

        head->back = nullptr;
        prev->next = nullptr;

        delete prev;
        cout << "Head node deleted successfully." << endl;
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
    Node *tail = temp->next;
    temp->next = tail->next;
    tail->back = nullptr;

    delete tail;
    cout << "Tail node deleted successfully." << endl;
    return head;
}

Node *deleteKthPosition(Node *head, int kthPosition)
{
    if (head == NULL)
    {
        cout << "List is empty, cannot delete at position " << kthPosition << endl;
        return head;
    }
    int cnt = 0;

    Node *kNode = head;

    while (kNode != NULL)
    {
        cnt++;

        if (cnt == kthPosition)
            break;

        kNode = kNode->next;
    }

    Node *prev = kNode->back;
    Node *front = kNode->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return headDeletion(head);
    }
    else if (front == NULL)
    {
        return tailDeletion(head);
    }

    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;
    cout << "Node at position " << kthPosition << " deleted successfully." << endl;

    return head;
}

Node *deleteAtValue(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            if (temp == head)
                head = head->next;
            else
            {
                temp->back->next = temp->next;
                if (temp->next != nullptr)
                    temp->next->back = temp->back;
            }
            delete temp;
            cout << "Node with value " << value << " deleted successfully." << endl;
            return head;
        }
        temp = temp->next;
    }
    cout << "Value not found in the linked list." << endl;
    return head;
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