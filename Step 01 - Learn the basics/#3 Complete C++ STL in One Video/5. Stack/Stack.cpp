#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{

    stack<int> s;

    // Modifying Elements: pushing elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // Accessing Elements: printing the top element of the stack
    cout << "Top element: " << s.top() << endl
         << endl;

    // Modifying Elements: popping elements from the stack
    s.pop();

    // Accessing Elements: printing the top element of the stack after popping
    cout << "Top element after popping: " << s.top() << endl
         << endl;

    // Size and Empty Check: checking if the stack is empty
    if (!s.empty())
    {
        cout << "Stack is not empty" << endl
             << endl;

        cout << s.top();
    }

    // printing the size of the stack
    cout << "Size of the stack: " << s.size() << endl
         << endl;
}
int main()
{
    // What is Stack in STL?
    // A stack in STL C++ is a dynamic data structure that allows for elements to be added and removed from the top of the stack. The main difference between a stack and a vector in STL C++ is that while vectors have a continuous block of memory, stacks do not. Instead, stacks have blocks of memory that are scattered in memory. Each block contains a fixed number of elements and a reference to the next block in the sequence.

    /*
    A Stack is a part of STL C++ library which allows the user to insert or remove elements in a specific order. In the context of the Stack class in C++, the specific order is known as LIFO (Last In First Out) order. This means the most recently added element will be the first one to be removed.
    */

    // List out the Operations perfromed in a Stack in STL?

    /*
     * 1. top() : Returns the value of the top element in the stack.
     * 2. push() : Adds the given value to the top of the stack.
     * 3. pop() : Removes the top element from the stack.
     * 4. size() : Returns the number of elements in the stack.
     * 5. empty() : Returns true if the stack is empty, false otherwise.
     */

    explainDeque();

    return 0;
}