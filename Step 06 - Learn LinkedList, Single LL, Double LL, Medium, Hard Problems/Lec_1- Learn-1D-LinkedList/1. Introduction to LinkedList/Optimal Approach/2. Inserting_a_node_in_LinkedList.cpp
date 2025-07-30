//! Program to Inserting a Node in Linked List

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(N) => to inserting every element in the linked list from the array.

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

    cout << "head->data => " << head->data << endl;
    cout << "head->next->data => " << head->next->data << endl;
    cout << "head->next->next->data => " << head->next->next->data
         << endl;

    delete head; // Free the memory allocated for the head node
    // Note: In a complete implementation, you would also need to delete all nodes in the linked list

    delete current; // Free the memory allocated for the current node
    // Note: This is not necessary here since current is just a pointer to the last node

    return 0;
}