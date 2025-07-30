//! Program to Inserting a Node in Doubly Linked List

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
    Node *back; // Pointer to the previous node in the DLL
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the DLL

    // Constructors
    Node(int data, Node *next, Node *back)
    {
        this->back = back;
        this->data = data;
        this->next = next;
    }

    Node(int data1)
    {
        this->back = nullptr; // Pointer to the previous node in the DLL
        this->data = data1;
        this->next = nullptr; // Pointer to the next node in the DLL
    }
};

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

    return 0;
}