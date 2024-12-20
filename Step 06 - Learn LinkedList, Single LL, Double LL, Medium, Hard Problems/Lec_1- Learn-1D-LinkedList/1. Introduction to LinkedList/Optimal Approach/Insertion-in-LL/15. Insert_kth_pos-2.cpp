//! Program to Insert a Node at the Kth position in the Linked List

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
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(data);
        }
        else
            return head;
    }

    if (k == 1)
        return new Node(data, head);

    int cnt = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;

        if (cnt == k - 1)
        {
            Node *newNode = new Node(data, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;

        if (temp == nullptr)
        {
            cout << "Invalid position. Cannot insert at position " << k << "." << endl;
            return head;
        }
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

    return 0;
}