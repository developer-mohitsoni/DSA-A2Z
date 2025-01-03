//! Program to Insert a Node at it's Value in the Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C =>
// O(N) => for traversal in the linked list

// O(N) => for returning the length of the linked list

// O(N) => for searching an element in the linked list at worst case if element is not found, O(1)=> If element is found at the head of the linked list, O(N/2)=> If element is found b/w the linked list

// O(1) => to Insert a node at the head of the linked list

// O(N) => to Insert a node at the end of the linked list

// O(k)=> If 𝑘 ≤ 𝑛 you traverse up to the k−1th node. O(N) => In the worst case when k = n+1 (insert at the end)

// O(N) => You may need to traverse the entire list to find the target value. If the target value is at the head, it runs in O(1)

// O(N) => You may need to traverse the entire list to find the target value.

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

Node *tailInsertion(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        return newNode;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node *insertAtKthPosition(Node *head, int data, int k)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(data);
        }
        else
        {
            return NULL;
        }
    }

    // Case 1: Insert at the head
    if (k == 1)
    {
        newNode->next = head;
        return newNode;
    }

    Node *temp = head;
    int count = 1;

    // Traverse the list to find (k-1)-th node
    while (temp->next != nullptr && count < k - 1)
    {
        temp = temp->next;
        count++;
    }

    // Case 2: K is out of bounds (greater than the size of the list + 1)
    if (temp == nullptr)
    {
        cout << "Position " << k << " is out of bounds!" << endl;
        delete newNode;
        return head;
    }

    // Case 3: Insert at the k-th position
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

Node *insertBeforeValue(Node *head, int targetValue, int newValue)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == targetValue)
    {
        Node *newHead = new Node(newValue);
        newHead->next = head;
        return newHead;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->next->data == targetValue)
        {
            Node *newNode = new Node(newValue);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertAfterValue(Node *head, int targetValue, int newValue)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *newNode = new Node(newValue);
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == targetValue)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
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

    // Inserting a node at the head of the linked list
    int data;
    cout << "Enter the data for the new node: ";
    cin >> data;

    head = headInsertion(head, data);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    // Inserting a node at the tail of the linked list
    int data2;
    cout << "Enter the data for the new node: ";
    cin >> data2;

    head = tailInsertion(head, data2);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    // Inserting a node at a given position
    int k;
    cout << "Enter the position for the new node: ";
    cin >> k;

    int data3;
    cout << "Enter the data for the new node: ";
    cin >> data3;

    head = insertAtKthPosition(head, data3, k);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    // Inserting a node before a given value
    int valueBefore;
    cout << "Enter the value before which the new node should be inserted: ";
    cin >> valueBefore;

    int newDataBefore;
    cout << "Enter the data for the new node: ";
    cin >> newDataBefore;

    head = insertBeforeValue(head, valueBefore, newDataBefore);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    // Inserting a node after a given value
    int valueAfter;
    cout << "Enter the value after which the new node should be inserted: ";
    cin >> valueAfter;

    int newDataAfter;
    cout << "Enter the data for the new node: ";
    cin >> newDataAfter;

    head = insertAfterValue(head, valueAfter, newDataAfter);
    cout << "Linked list after insertion: ";
    printLL(head);

    cout << endl;

    return 0;
}