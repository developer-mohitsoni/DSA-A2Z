//! Into to Doubly Linked List Code

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

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
public:
    Node(int data, Node *next, Node *back)
    {
        this->back = back;
        this->data = data;
        this->next = next;
    }

public:
    Node(int data)
    {
        this->back = nullptr; // Pointer to the previous
        this->data = data;
        this->next = nullptr; // Pointer to the next
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

    // Node *head = new Node(arr[0], nullptr, nullptr);
    Node *head = new Node(arr[0]);

    cout << "head: " << head << endl;

    // here head->prev will be nullptr address
    cout << "head->prev: " << head->back << endl;

    cout << "head->data: " << head->data << endl;

    // here head->next will be nullptr address
    cout << "head->next: " << head->next << endl;

    return 0;
}