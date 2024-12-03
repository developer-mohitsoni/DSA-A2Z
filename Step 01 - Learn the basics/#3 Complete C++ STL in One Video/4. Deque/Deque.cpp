#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> d;

    // Insert elements at the front of the deque
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);

    // Insert elements at the end of the deque
    d.push_back(4);
    d.push_back(5);

    // Print all elements in the deque
    for(int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout<<endl<<endl;
    
    // Remove the first element of the deque
    d.pop_front();

    // Remove the last element of the deque
    d.pop_back();

    // Print all elements in the deque after removing the first and last elements
    for(int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }

    cout<<endl;

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.clear();

    if(d.empty()){
        cout<<"EMPTY!";
    }

}
int main(){
    // What is Deque in STL?
    // A deque in STL C++ is a dynamic data structure that allows for elements to be added, removed, and accessed efficiently. The main difference between a deque and a vector in STL C++ is that while vectors have a continuous block of memory, deques have blocks of memory that are scattered in memory. Each block contains a fixed number of elements and a reference to the next block in the sequence.

    /*
    Deque is a class template in STL (Standard Template Library) C++. It is a generalization of stacks and queues that supports thread-safe access and efficient traversal of elements in the data structure.

    A Deque allows adding or removing elements from both ends, similar to how we can push and pop elements from a stack, and also similar to how we can enqueue and dequeue elements from a queue.

    Deque provides random access, i.e., it allows accessing elements by their index positions, and this makes it very similar to vectors in C++. However, deques are more efficient when adding or removing elements from the ends, while vectors are not.

    In terms of time complexity, deque provides O(1) average time complexity for random access, insertion, and deletion at both ends, making it highly efficient for certain applications.
    */

   // List of the Operations perfromed in a Deque?

    /*
   * 1. push_front(): Inserts an element at the beginning of the deque.
   * 2. push_back(): Inserts an element at the end of the deque.
   * 3. pop_front(): Removes the first element of the deque.
   * 4. pop_back(): Removes the last element of the deque.
   * 5. front(): Returns a reference to the first element of the deque.
   * 6. back(): Returns a reference to the last element of the deque.
   * 7. empty(): Checks if the deque is empty.
   * 8. size(): Returns the number of elements in the deque.
   */

    /*
    Note: If the maximum size is known beforehand, it is recommended to use std::vector as std::deque does not perform as well in terms of memory usage. Additionally, if you do not require to access the middle elements, you may also consider using std::queue or std::stack, which provide a limited set of operations but can be more efficient than std::deque in certain situations.
  */

    explainDeque();

   return 0;
}